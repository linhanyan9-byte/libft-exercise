int count_words(char const *s, char c)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            count++;
        i++;
    }
    return (count + 1);
}
char **ft_split(char const *s, char c)
{
    char **map;
    int start;
    int end;
    int size;
    int i;
    int j;
    int word;

    //check input edge case, s being null//
    if (!s)
        return (NULL);
    j = 0;
    i = 0;
    start = 0;
    end = 0;
    
    word = count_words(s, c);
    map = malloc(sizeof(char *) * (word + 1));
    if (!map)
        return (NULL);
    while (s[end])
    {
        j = 0;
        while (s[end])
        {
            if (s[end] == c)
                break; 
            end++;
        }

        //size should already has the spot for'\0'
        size = end - start;
        map[i] = malloc(sizeof(char) * (size + 1));
        if (!map[i])
        {
            //need to clean up the memory already assigned//
            while (i > 0)
            {
                i--;
                free(map[i]);
            }
            free(map);
            return (NULL);
        }
        while (j < size)
        {
            map[i][j] = s[start];
            j++;
            start++;
        }
        //edge: consider the end word//
        if (s[end] != '\0')
        {
            start++;
            end++;
        }
        map[i][j] = '\0';
        i++;
    }
    map[i] = NULL;
    return (map);
}