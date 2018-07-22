/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 23:07:41 by ayadav            #+#    #+#             */
/*   Updated: 2018/07/06 23:07:45 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void*))
{
	if (root == 0)
		return ;
	applyf(root->item);
	btree_apply_suffix(root->left, applyf);
	btree_apply_suffix(root->right, applyf);
}
