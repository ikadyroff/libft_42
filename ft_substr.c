/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni <wlouveni@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:18:30 by wlouveni          #+#    #+#             */
/*   Updated: 2021/10/19 12:36:59 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = 0;
	if (!len || ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substr = (char *) malloc(sizeof(*s) * (len + 1));
	if (!substr)
		return (NULL);
	while (s_len < len && s[start] != '\0')
	{
		substr[s_len] = s[start];
		s_len++;
		start++;
	}
	substr[s_len] = '\0';
	return (substr);
}
