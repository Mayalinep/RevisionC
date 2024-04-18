/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maya <maya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:09:29 by maya              #+#    #+#             */
/*   Updated: 2024/04/18 13:19:02 by maya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int 	ft_isalpha(int c)
{
    if((c >= 'A' && c <= 'Z') || ( c >= 'a' && c <= 'z'))
    {
        return (1);
    }
    else
        return (0);
}
/*
int main(int argc, char **argv)
{
    if(argc != 2)
        return (0);
    printf("%d", ft_isalpha(argv[1][0]));
}
*/