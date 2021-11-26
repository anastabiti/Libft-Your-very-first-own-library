/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:06:34 by atabiti           #+#    #+#             */
/*   Updated: 2021/11/21 11:00:10 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	lenght;
	char	*copyptr;

	lenght = ft_strlen(s1) + 1;
	copyptr = malloc(lenght);
	if (copyptr == NULL)
		return (NULL);
	ft_memcpy(copyptr, s1, lenght);
	return (copyptr);
}
