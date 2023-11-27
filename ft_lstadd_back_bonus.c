/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 05:19:08 by rlamtaou          #+#    #+#             */
/*   Updated: 2023/11/20 16:21:23 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr_node;

	if (!new || !lst)
		return ;
	if (*lst)
	{
		ptr_node = ft_lstlast(*lst);
		ptr_node->next = new;
	}
	else
		*lst = new;
}
