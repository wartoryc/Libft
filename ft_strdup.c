/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 18:14:37 by jumurphy          #+#    #+#             */
/*   Updated: 2016/02/12 18:14:38 by jumurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <errno.h>

char	*ft_strdup(char *s1)
{
	int		i;
	size_t	lenght;
	char	*new_str;

	if (s1 == NULL)
		return (NULL);
	lenght = ft_strlen(s1);
	new_str = (char *)malloc(sizeof(char) * (lenght + 1));
	if (new_str == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	i = 0;
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
