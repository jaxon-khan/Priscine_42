/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_pr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:23:36 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 12:23:44 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_apply_pr(t_btree *root, void (*f)(void *))
{
	if (root)
	{
		f(root->item);
		ft_btree_apply_pr(root->left, f);
		ft_btree_apply_pr(root->right, f);
	}
}
