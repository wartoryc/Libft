/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 18:32:18 by jumurphy          #+#    #+#             */
/*   Updated: 2016/02/12 18:32:28 by jumurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t  i;
	int             s1_bis;

	i = 0;
	while (s1[i])
		i++;
	s1_bis = i;
	while (s2[i - s1_bis] && i - s1_bis < n)
	{
		s1[i] = s2[i - s1_bis];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
