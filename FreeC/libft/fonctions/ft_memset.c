/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maya <maya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:30:01 by maya              #+#    #+#             */
/*   Updated: 2024/04/19 22:50:27 by maya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *s, int c, size_t len)
{
    size_t	i;
    i = 0;
	unsigned char 	*str = s; // Casting de void* à unsigned char* pour manipulation octet par octet
    while(i < len)
    {
        str[i] = (unsigned char )c;
        i++;
    }
    return (s);
}
/*
int  main()
{
	char a[] = "Hello";
	write(1, a , 6);
	write(1, "\n",  1);
	ft_memset(a, 'A', 7);
	write(1, a , 7);
    write(1, "\n" ,   1);
	return 0;
}  
*/
    
    