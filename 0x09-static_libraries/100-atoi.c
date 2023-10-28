int _atoi(char *s)
{
    int sign = 1, result = 0;
    int i = 0;

    if (s[0] == '-')
    {
        sign = -1;
        i++;
    }

    for (; s[i] != '\0'; ++i)
        result = result * 10 + s[i] - '0';

    return sign * result;
}

