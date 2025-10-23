#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (j < nb && src[j] != '\0')
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
    // printf("%s", strncat(dest, src));
    printf("%s", ft_strncat(dest, src, 5));
}