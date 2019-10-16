/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:11:01 by ekhanevi          #+#    #+#             */
/*   Updated: 2019/10/16 12:11:05 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr;
	t_list	*tmp;

	ptr = *alst;
	while (ptr)
	{
		tmp = ptr;
		ft_lstdelone(&ptr, del);
		ptr = tmp->next;
	}
	*alst = NULL;
}
