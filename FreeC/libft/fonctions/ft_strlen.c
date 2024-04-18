/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maya <maya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:51:47 by maya              #+#    #+#             */
/*   Updated: 2024/04/18 19:11:45 by maya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t  ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
        i++;
    
    return (i);
}

#include <stdio.h>
#include <stdlib.h>

int   main(int argc, char  **argv)
{
    if(argc != 2)
        return (0);
    printf("%zu\n", ft_strlen(argv[1]));
}