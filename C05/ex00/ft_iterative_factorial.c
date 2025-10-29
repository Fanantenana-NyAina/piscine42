/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanantenana <fanantenana@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 21:00:18 by fanantenana       #+#    #+#             */
/*   Updated: 2025/10/29 22:20:18 by fanantenana      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    if (nb < 0)
    {
        return 0;
    }
    
    if (nb == 0)
    {
        return (1);
    }
    int fact = 1;
    int i = 1;
    while (i <= nb)
    {
        fact *= i;
        i++;
    }
    return fact;
}
// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_iterative_factorial(5));
// }