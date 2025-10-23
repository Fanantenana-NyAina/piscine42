#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;
    while (i < n && (s1[i] && s2[i]))
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    
    return 0;
}

int main(void)
{
    char *s1 = "A";
    char *s2 = "AB";
    printf("%d", ft_strncmp(s1, s1, 1));
    printf("%d", strncmp(s1, s1, 1));
}