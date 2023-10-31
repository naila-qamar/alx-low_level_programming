#include "main.h"
#include <stddef.h> // for NULL

char *_strstr(char *haystack, char *needle)
{
    int i, j;
    for (i = 0; haystack[i]; i++)
    {
        for (j = 0; needle[j]; j++)
        {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (!needle[j])
            return (haystack + i);
    }
    return (NULL);
}

