#include "libft.h"
char **free_current(char **dest, int current_words)
{
    while(current_words >= 0)
    {
        free(dest[current_words]);
        current_words--;
    }
    free(dest);
    return NULL;
}
char	**ft_split(char const *s, char c)
{
    int count = 0;
    int count1 = 0;
    int count_word = 0;
    int i = 0;
    int j = 0;

    while (s[i] != '\0')
    {
        if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
            count_word++;
        i++;
        
    }
    i = 0;
    char **dest = malloc(sizeof(char *) * (count_word + 1));
    while (s[count] != '\0')
    {
        while (s[count] == c && s[count] != '\0')
            count++;
        if (s[count] == '\0')
            break;
        while (s[count] != c)
        {
            count1 = count;
            while (s[count] != c && s[count] != '\0')
                count++;
            dest[i] = malloc(sizeof(char) * ((count - count1) + 1));
            if (!dest[i])
                return (free_current(dest, i));
            while (count1 < count)
            {
                dest[i][j] = s[count1];
                j++;
                count1++;
            }
            dest[i][j] = '\0';
            i++;
        }
        j = 0;
        count++;
    }
    dest[i] = NULL;
    return (dest);
}

int main()
{
    char **test;
    test = ft_split(" hey     bubble butt with pink mint.   ", ' ');
    int i = 0;
    while (test[i] != NULL)
    {
        printf("%s\n", test[i]);
        free(test[i]);
        i++;
    }
    free(test);
}