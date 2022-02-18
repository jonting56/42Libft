/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:44:59 by jting             #+#    #+#             */
/*   Updated: 2022/02/18 12:18:23 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lastadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!(*lst))
		return ;
	ptr = *lst;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
}
