/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanantenana <fanantenana@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:07:28 by fanantenana       #+#    #+#             */
/*   Updated: 2025/10/29 22:26:44 by fanantenana      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
    {
        return 0;
    }
    if (power == 0)
    {
        return 1;
    }
    return nb * ft_recursive_power(nb, power - 1);
}

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_recursive_power(2, 3));
// }