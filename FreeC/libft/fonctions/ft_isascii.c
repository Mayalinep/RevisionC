/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maya <maya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:25:03 by maya              #+#    #+#             */
/*   Updated: 2024/04/18 13:41:19 by maya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}
/*
int main(int argc, char **argv)
{
    if(argc != 2)
        return (0);
    printf("%d\n", ft_isascii(argv[1][0]));
}
*/