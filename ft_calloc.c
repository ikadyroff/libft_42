/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni <wlouveni@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:22:41 by wlouveni          #+#    #+#             */
/*   Updated: 2021/10/13 16:40:08 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*oblast;

	oblast = malloc(count * size);
	if (!oblast)
		return (NULL);
	oblast = ft_memset(oblast, 0, count * size);
	return (oblast);
}
