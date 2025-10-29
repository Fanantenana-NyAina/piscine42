/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanantenana <fanantenana@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:07:14 by fanantenana       #+#    #+#             */
/*   Updated: 2025/10/29 22:17:06 by fanantenana      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    if (power < 0)
    {
        return 0;
    }
    if (nb == 0 && power == 0)
    {
        return 1;
    }
    int res = 1;
    int i = 0;
    while (i < power)
    {
        res *= nb;
        i++;
    }
    return res;
}

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_iterative_power(2, 3));
// }