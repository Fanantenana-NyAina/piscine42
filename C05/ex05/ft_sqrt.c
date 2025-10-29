/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanantenana <fanantenana@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 23:20:45 by fanantenana       #+#    #+#             */
/*   Updated: 2025/10/29 23:43:49 by fanantenana      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    int i = 1;
    while (i * i <= nb)
    {
        if (i * i == nb)
        {
            return i;
        }
        i++;
    }
    return 0;
    
}

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_sqrt(5));
// }