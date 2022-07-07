/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni <wlouveni@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:24:51 by wlouveni          #+#    #+#             */
/*   Updated: 2021/10/26 15:47:01 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	*malloc_error(char **mass, int i)
{
	int	n;

	n = 0;
	while (n < i)
	{
		free(mass[n]);
		n++;
	}
	free(mass);
	return (0);
}

static int	dlina_str(char const *str, char del)
{
	int	n;

	n = 0;
	if (!str)
		return (0);
	while (str[n] != del && str[n] != '\0')
		n++;
	return (n);
}

static int	n_word(char const *str, char c)
{
	int	n_sym;
	int	n_wrd;

	n_wrd = 0;
	n_sym = -1;
	while (str[++n_sym])
	{
		if ((str[n_sym + 1] == c || str[n_sym + 1] == '\0') && str[n_sym] != c)
			n_wrd++;
	}
	return (n_wrd);
}

static char	**fill_mass(char const *str, char del, char **mass, int w_len)
{	
	int	n_wrd;
	int	n_str;
	int	len;

	n_str = -1;
	while (++n_str < w_len)
	{
		while (*str == del)
			str++;
		len = dlina_str(str, del);
		mass[n_str] = malloc(len + 1);
		if (!mass[n_str])
			return (malloc_error(mass, n_str));
		n_wrd = 0;
		while (n_wrd < len)
			mass[n_str][n_wrd++] = *str++;
		mass[n_str][n_wrd] = '\0';
	}
	mass[n_str] = 0;
	return (mass);
}

char	**ft_split(char const *s, char c)
{
	int		n_wrd;
	char	**mass;

	if (!s)
		return (NULL);
	n_wrd = n_word(s, c);
	mass = (char **)malloc(sizeof(char *) * (n_wrd + 1));
	if (!mass)
		return (0);
	mass = fill_mass(s, c, mass, n_wrd);
	return (mass);
}
