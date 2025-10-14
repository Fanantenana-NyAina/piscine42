#include <stdio.h>

int ft_strlen(char *str)
{
	int count = 0;

	while(*str)
	{
		count = count +1;
		str++;
	}

	return count;
}

int main(void)
{
	printf("%d", ft_strlen("hello"));
}
