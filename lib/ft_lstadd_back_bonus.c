/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: az0100 <az0100@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 00:27:09 by ahamou            #+#    #+#             */
/*   Updated: 2023/11/03 06:16:19 by az0100           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	back = *lst;
	if (!lst && !new)
		return ;
	if (*lst)
	{
		back = ft_lstlast(back);
		back->next = new;
	}
	else
		*lst = new;
}
