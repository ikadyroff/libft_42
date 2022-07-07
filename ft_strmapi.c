/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni <wlouveni@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:43:02 by wlouveni          #+#    #+#             */
/*   Updated: 2021/10/18 15:40:47 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	char	*str;

	if (!s || !f)
		return (NULL);
	size = -1;
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (s[++size])
		str[size] = f(size, s[size]);
	str[size] = '\0';
	return (str);
}
