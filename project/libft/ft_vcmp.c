/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vcmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 09:30:04 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/30 09:31:19 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_vcmp(void *c1, void *c2, int tsize, int isasd)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)c1;
	b = (unsigned char *)c2;
	while (tsize-- && *a == *b)
	{
		a++;
		b++;
	}
	if (tsize < 0)
		return (0);
	return (isasd ? (*a - *b) : (*b - *a));
}
