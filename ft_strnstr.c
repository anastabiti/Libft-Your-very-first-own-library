/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:46:57 by atabiti           #+#    #+#             */
/*   Updated: 2021/11/12 12:32:48 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlelenght;

	needlelenght = ft_strlen(needle);
	if (needlelenght == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len >= needlelenght)
	{
		if (!ft_memcmp(haystack, needle, needlelenght))
			return ((char *)haystack);
	haystack++;
	len--;
	}
	return (NULL);
}
