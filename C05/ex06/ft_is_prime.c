/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanantenana <fanantenana@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 23:58:00 by fanantenana       #+#    #+#             */
/*   Updated: 2025/10/30 00:06:42 by fanantenana      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
    int i;
    if (nb < 0)
        return 0;
    if (nb == 0 || nb == 1)
        return 0;
    i = 1;
    while (i <= nb)
    {
        if (nb % i == 0)
        {
            if (i != 1 && i != nb)
                return 0;
        }
        i++;
    }
    return 1;
}

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_is_prime(4));
// }