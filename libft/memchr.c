void *    memchr(const void *s, int c, size_t n)
{
     const unsigned char *s1;
     size_t i = 0;

     s1 = (const unsigned char *)s;

     
     while (i < n)
     {
          if(s1[i] == (unsigned char)c)
          {
               return (&s1[i]);
          }
          i++;
     }
     return (NULL);
}