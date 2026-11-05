int memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *s1_;
    const unsigned char *s2_;
    size_t i;
    i = 0;
    s1_ = (const unsigned char *)s1;
    s2_ = (const unsigned char *)s2;

    while (i < n)
    {
        if (s1_[i] == s2_[i])
            i++;
        else
            return (s1_[i] - s2_[i]);
    };
    return (0);
}