#include <unistd.h>

void	write_char(char c)
{
	write(1, &c, 1);
}

void	write_two_digits(int n)
{
	char tens = n / 10 + '0';
	char units = n % 10 + '0';

	write_char(tens);
	write_char(units);
}

void	display_combinations(void)
{
	int i = 0;
	int j;

	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			write_two_digits(i);
			write_char(' ');
			write_two_digits(j);

			if (!(i == 98 && j == 99))
			{
				write_char(',');
				write_char(' ');
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	display_combinations();
	return (0);
}
