/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maya <maya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:59:18 by maya              #+#    #+#             */
/*   Updated: 2024/05/01 21:07:23 by maya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == (char)c)
            return (i)
        else
            i++;
    }
    return (0)
    
}
        