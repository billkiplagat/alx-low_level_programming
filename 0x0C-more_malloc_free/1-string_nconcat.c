char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    int i;
    int len1, len2;
    char *p;
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
    len1 = strlen(s1);
    len2 = strlen(s2);
    if (n >= len2)
        n = len2;
    p = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
    if (p == NULL)
        return (0);
    for (i = 0; i < len1; i++)
    {
       p[i] = s1[i];
    }
    for (; i < (len1 + n); i++)
    {
        p[i] = s2[i - len1];
    }
    p[i] = '\0';
    return p;
}
