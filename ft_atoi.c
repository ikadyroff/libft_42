/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni <wlouveni@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:23:31 by wlouveni          #+#    #+#             */
/*   Updated: 2021/10/20 15:11:51 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	digit;
	int			znak;

	digit = 0;
	znak = 1;
	while (*str && (*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' '))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			znak = -1;
	}
	while (*str && *str > 47 && *str < 58)
	{
		digit = (digit * 10) + ((*str++) - 48);
		if (digit < 0)
		{
			if (znak < 0)
				return (0);
			return (-1);
		}
	}
	return (digit * znak);
}
