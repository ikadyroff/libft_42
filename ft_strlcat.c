/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni <wlouveni@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:25:44 by wlouveni          #+#    #+#             */
/*   Updated: 2021/10/18 16:13:49 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;
	size_t	len_dstsrc;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	len_dstsrc = len_dst + len_src;
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	while (*dst)
		dst++;
	while (src[i] && (i < dstsize - (len_dstsrc - len_src) - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_dstsrc);
}
