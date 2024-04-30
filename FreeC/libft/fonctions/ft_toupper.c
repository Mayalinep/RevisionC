/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maya <maya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 21:32:57 by maya              #+#    #+#             */
/*   Updated: 2024/04/30 22:56:02 by maya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_toupper(int c)
{
    if(c >= 'a'  && c <= 'z')
    {
        c =  c - 32 ;
    }
    else
        return (c);

    return (c);
}
/*
int     main(int argc, char **argv)
{
    if(argc == 2)
    {
        if(argv [1][1] == '\0')
        { 
            char upper = ft_toupper(argv[1][0]);
            write(1, &upper, 1);
        }
        else
            write(1, "\n", 1);
    }
    else
        write(1, "\n" , 1);
}
*/