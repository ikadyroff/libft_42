/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni <wlouveni@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:29:15 by wlouveni          #+#    #+#             */
/*   Updated: 2021/10/20 18:48:38 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	lennbr(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	sign(int n, int len, char *str)
{
	long	nbr;

	nbr = n;
	if (n < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nbr)
	{
		str[len] = nbr % 10 + '0';
		len--;
		nbr = nbr / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = lennbr(n);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	sign(n, len, str);
	return (str);
}
