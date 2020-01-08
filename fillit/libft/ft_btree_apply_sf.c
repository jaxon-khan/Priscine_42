/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_sf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:26:41 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 12:26:58 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_apply_sf(t_btree *root, void (*f)(void *))
{
	if (root->left)
		ft_btree_apply_sf(root->left, f);
	if (root->right)
		ft_btree_apply_sf(root->right, f);
	if (root)
		f(root->item);
}
