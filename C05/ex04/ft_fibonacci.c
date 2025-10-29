/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanantenana <fanantenana@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:42:36 by fanantenana       #+#    #+#             */
/*   Updated: 2025/10/29 23:17:06 by fanantenana      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    if (index < 0)
    {
        return -1;
    }
    if (index == 0)
    {
        return 0;
    }
    if (index == 1)
    {
        return 1;
    }
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_fibonacci(7));
// }