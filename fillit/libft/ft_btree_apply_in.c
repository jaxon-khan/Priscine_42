/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_in.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:19:37 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 12:22:46 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_apply_in(t_btree *root, void (*f)(void*))
{
	if (root->left)
		ft_btree_apply_in(root->left, f);
	if (root)
		f(root->item);
	if (root->right)
		ft_btree_apply_in(root->right, f);
}
