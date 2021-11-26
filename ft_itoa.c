/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 07:57:01 by atabiti           #+#    #+#             */
/*   Updated: 2021/11/17 15:29:19 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	nlenght(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
		nb = -nb;
	len++;
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static void	reversit(char *string)
{
	char	c;
	long	i;
	long	j;

	i = 0;
	j = ft_strlen(string) - 1;
	while (i < j)
	{
		c = string[i];
		string[i] = string[j];
		string[j] = c;
		i++;
		j--;
	}
}

static void	*converter(int a, char *s3)
{
	long	g;
	size_t	index;

	g = a;
	index = 0;
	if (g == 0)
	{
		s3[index++] = '0';
		s3[index] = '\0';
		return (s3);
	}
	if (g < 0)
		g = -g;
	while (g > 0)
	{
		s3[index++] = g % 10 + '0';
		g = g / 10;
	}
	if (a < 0)
		s3[index++] = '-';
	s3[index] = '\0';
	return (0);
}

char	*ft_itoa(int n)
{
	char	*ptr;

	ptr = (char *) malloc (sizeof (char) * (nlenght(n) + 1));
	if (!ptr)
		return (NULL);
	converter(n, ptr);
	reversit(ptr);
	return (ptr);
}
