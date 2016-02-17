/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 17:35:04 by jumurphy          #+#    #+#             */
/*   Updated: 2016/02/12 17:35:06 by jumurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t	i;
	char	*src;
	char	*dest;

	dest = (char *)s1;
	src = (char *)s2;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
