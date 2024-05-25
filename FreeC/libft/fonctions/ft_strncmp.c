/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpelage <mpelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:59:59 by mpelage           #+#    #+#             */
/*   Updated: 2024/05/23 14:31:34 by mpelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		// Are strings equal up to n characters?
	{
		i++;
	}
	if (i == n) // if no difference was found
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		// the difference between the two current characters should be returned.
}
