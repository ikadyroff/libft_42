/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni <wlouveni@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:03:59 by wlouveni          #+#    #+#             */
/*   Updated: 2021/10/20 13:38:14 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	number_of_lists;

	number_of_lists = 0;
	while (lst)
	{
		lst = lst->next;
		number_of_lists++;
	}
	return (number_of_lists);
}
