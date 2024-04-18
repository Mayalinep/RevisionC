/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maya <maya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:42:50 by maya              #+#    #+#             */
/*   Updated: 2024/04/18 13:48:22 by maya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int 	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)    
		return (1);
	else
		return (0);
}

/*
int main(int argc, char **argv)
{
    if(argc != 2)
        return (0);
    printf("%d\n", ft_isprint(argv[1][0]));
}
*/