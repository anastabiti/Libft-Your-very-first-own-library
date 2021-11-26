/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:57:41 by atabiti           #+#    #+#             */
/*   Updated: 2021/11/21 09:56:34 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	j;

	j = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		srclen = size + srclen;
	else
		srclen = srclen + dstlen;
	while (src[j] != '\0' && dstlen + 1 < size)
	{
		dst[dstlen] = src[j];
		j++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return (srclen);
}
