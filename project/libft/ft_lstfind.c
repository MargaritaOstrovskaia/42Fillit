/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 09:19:23 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/30 09:20:26 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfind(t_list *begin, void *data, int (*cmp)())
{
	t_list	*tmp;

	tmp = begin;
	while (tmp)
	{
		if (cmp(tmp->content, data) == 0)
			return (tmp);
		tmp = tmp->next;
	}
	return (0);
}
