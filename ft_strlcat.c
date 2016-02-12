/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 18:24:36 by jumurphy          #+#    #+#             */
/*   Updated: 2016/02/12 18:24:39 by jumurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t  i;
	size_t  s1;

	i = 0;
	while (dest[i] && i < size)
		i++;
	s1 = i;
	while (src[i - s1] && i < size - 1)
	{
		dest[i] = src[i - s1];
		i++;
	}
	if (s1 < size)
		dest[i] = '\0';
	return (s1 + ft_strlen(src));
}
