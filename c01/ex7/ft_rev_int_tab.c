#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int reversed[size];

	int index = 0;
	while (index < size)
	{
		reversed[index] = tab[(size - 1) - index];
		index++;
	}

	int index1 = 0;
	while(index1 < size)
	{
		tab[index1] = reversed[index1];
		index1++;
	}
}

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int size = 5;

	ft_rev_int_tab(arr, size);
	
	int i = 0;
	while(i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
}
