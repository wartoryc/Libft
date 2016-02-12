/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 18:41:04 by jumurphy          #+#    #+#             */
/*   Updated: 2016/02/12 18:41:06 by jumurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	int     lenght;

	lenght = ft_strlen(s) + 1;
	while (lenght)
	{
		if (s[lenght] == (char)c)
			return ((char *)s + lenght);
	}
	if (s[lenght] == (char)c)
		return ((char *)s + lenght);
	return (NULL);
}
