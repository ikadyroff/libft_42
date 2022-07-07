/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni <wlouveni@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:20:45 by wlouveni          #+#    #+#             */
/*   Updated: 2021/10/15 13:28:24 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str_1;
	unsigned char	*str_2;
	unsigned int	i;

	str_2 = (unsigned char *)dst;
	str_1 = (unsigned char *)src;
	i = 0;
	if (dst == 0 && src == 0)
		return (NULL);
	while (i < n)
	{
		str_2[i] = str_1[i];
		i++;
	}
	return (dst);
}
