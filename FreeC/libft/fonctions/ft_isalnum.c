/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maya <maya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:08:09 by maya              #+#    #+#             */
/*   Updated: 2024/04/18 13:16:03 by maya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int 	ft_isalnum(int c)
{
    if((c >= '0' && c <= '9') || ((c >= 'a' &&  c <= 'z')) || (c >= 'A'  && c <= 'Z'))
    {
        return (1);
    }
    else
        return (0);
}

int main(int argc, char **argv)
{
    if(argc != 2)
        return (0);
    printf("%d", ft_isalnum(argv[1][0]));
}
