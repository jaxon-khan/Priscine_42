/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_new_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:28:17 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 12:29:24 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_btree	*ft_btree_new_node(void *item)
{
	t_btree *new_tree;

	if (!item)
		return (NULL);
	new_tree = (t_btree *)malloc(sizeof(*new_tree));
	if (new_tree)
	{
		new_tree->item = item;
		new_tree->left = 0;
		new_tree->right = 0;
	}
	return (new_tree);
}
