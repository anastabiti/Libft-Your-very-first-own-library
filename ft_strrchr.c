/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:35:36 by atabiti           #+#    #+#             */
/*   Updated: 2021/11/19 19:44:54 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = 0;
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
	last = (char *)s;
	s++;
	}
	if (c == '\0')
		return ((char *)s);
	else
		return (last);
}
