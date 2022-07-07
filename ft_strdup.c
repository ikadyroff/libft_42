/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni <wlouveni@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:28:39 by wlouveni          #+#    #+#             */
/*   Updated: 2021/10/13 16:41:14 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*const_str;
	char	*temp_str;

	size = ft_strlen(s1);
	const_str = (char *)malloc(sizeof(char) * size + 1);
	if (const_str == NULL)
		return (NULL);
	temp_str = const_str;
	while (size--)
		*const_str++ = *s1++;
	*const_str = '\0';
	return (temp_str);
}
