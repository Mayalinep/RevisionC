/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maya <maya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:51:21 by maya              #+#    #+#             */
/*   Updated: 2024/05/01 20:53:43 by maya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_tolower(int c)
{
    if(c >= 'A'  && c <= 'Z')
    {
        c =  c + 32 ;
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
            char upper = ft_tolower(argv[1][0]);
            write(1, &upper, 1);
        }
        else
            write(1, "\n", 1);
    }
    else
        write(1, "\n" , 1);
}
*/  