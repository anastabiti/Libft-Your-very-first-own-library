/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:54:07 by atabiti           #+#    #+#             */
/*   Updated: 2021/11/22 17:36:22 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	mer;
	size_t	lenght;
	char	*merge;

	mer = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	lenght = ft_strlen(s1) + ft_strlen(s2) + 1;
	merge = (char *) malloc (sizeof (char) * lenght);
	if (!merge)
		return (NULL);
	while (*s1 != '\0')
	{
		merge[mer] = *s1;
		s1++;
		mer++;
	}
	while (*s2 != '\0')
	{
		merge[mer] = *s2;
	s2++;
	mer++;
	}
	merge[mer] = '\0';
	return (merge);
}
