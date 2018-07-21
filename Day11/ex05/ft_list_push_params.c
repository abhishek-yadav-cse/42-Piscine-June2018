/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 18:25:17 by ayadav            #+#    #+#             */
/*   Updated: 2018/07/04 19:44:18 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem;

	elem = ft_create_elem(data);
	elem->next = *begin_list;
	*begin_list = elem;
}

t_list	*ft_list_push_params(int argc, char **argv)
{
	t_list	*list;
	int		i;

	list = 0;
	i = 0;
	while (i < argc)
		ft_list_push_front(&list, argv[i++]);
	return (list);
}
