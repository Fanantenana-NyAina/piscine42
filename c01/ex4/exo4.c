void ft_ultimate_div_mod(int *a, int *b)
{
	int temp_a;
	int temp_b;
	temp_a = *a;
	*a = temp_a / b;
	temp_b = *b;
	*b = temp_a % *b;
}
