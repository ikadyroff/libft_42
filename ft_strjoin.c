/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni <wlouveni@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:19:11 by wlouveni          #+#    #+#             */
/*   Updated: 2021/10/19 13:23:28 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*f_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	return (dst);
}

static char	*f_strcat(char *dst, const char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dst);
	j = 0;
	while (src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		l;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	l = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(*str) * (l + 1));
	if (str == NULL)
		return (NULL);
	f_strcpy(str, s1);
	f_strcat(str, s2);
	return (str);
}
