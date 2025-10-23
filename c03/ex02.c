#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    return dest;
}

int main(void)
{
    char dest[20] = "Hello";
    char src[] = " World!";
    // printf("%s", strcat(dest, src));
    printf("%s", ft_strcat(dest, src));
}