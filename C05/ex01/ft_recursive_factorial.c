/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanantenana <fanantenana@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:07:23 by fanantenana       #+#    #+#             */
/*   Updated: 2025/10/29 22:19:27 by fanantenana      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if (nb == 0)
    {
        return 1;
    }
    if (nb >= 1)
    {
        return nb * ft_recursive_factorial(nb - 1);
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_recursive_factorial(5));
// }