/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni <wlouveni@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:32:13 by wlouveni          #+#    #+#             */
/*   Updated: 2021/10/19 13:26:38 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*f_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*str;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	if ((char)c == str[i])
		return (&str[i]);
	return (0);
}

static char	*f_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static int	f_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_s1;
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && f_strchr(set, s1[start]))
		start++;
	end = f_strlen(s1 + start);
	if (end)
		while (s1[(start - 1) + end] && f_strchr(set, s1[(start - 1) + end]))
			end--;
	trimmed_s1 = (char *)malloc(sizeof(char) * (end + 1));
	if (trimmed_s1 == NULL)
		return (NULL);
	f_strncpy(trimmed_s1, ((char *)(s1 + start)), end);
	trimmed_s1[end] = '\0';
	return (trimmed_s1);
}
