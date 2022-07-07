/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni <wlouveni@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:12:44 by wlouveni          #+#    #+#             */
/*   Updated: 2021/10/20 16:38:25 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp_lst;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		tmp_lst = *lst;
		*lst = tmp_lst->next;
		free(tmp_lst);
	}
	lst = NULL;
}
