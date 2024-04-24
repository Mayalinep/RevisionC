/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maya <maya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 06:59:02 by maya              #+#    #+#             */
/*   Updated: 2024/04/24 22:15:26 by maya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t ft_strlcat(char *dest, const char *src, size_t len)
{
    size_t i = 0;  
    size_t j = 0; 
    
    while (dest[i] != '\0' && i < len)
        i++;

    size_t initial_len = i;  

    while (src[j] != '\0' && i < len - 1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    if (i < len)
        dest[i] = '\0';
    while (src[j] != '\0')
        j++;
    return initial_len + j;  
}
