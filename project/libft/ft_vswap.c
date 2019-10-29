/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 09:31:56 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/30 09:32:50 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_vswap(void *c1, void *c2, int tsize)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	tmp;

	a = (unsigned char *)c1;
	b = (unsigned char *)c2;
	while (tsize--)
	{
		tmp = *a;
		*a++ = *b;
		*b++ = tmp;
	}
}
