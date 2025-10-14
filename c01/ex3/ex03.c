#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int a = 4;
	int b = 2;
	int res_div;
	int res_mod;

	ft_div_mod(a, b, &res_div, &res_mod);

	printf("%d %d %d %d", a, b, res_div, res_mod);
}
