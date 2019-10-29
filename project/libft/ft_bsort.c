/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 09:07:11 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/30 09:35:28 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bsort(void *adr, int len, int tsize, int isasd)
{
	int				i;
	int				j;
	unsigned char	*a;

	if (!adr || len < 2 || tsize < 1 || isasd < 0 || isasd > 1)
		return ;
	a = (unsigned char *)adr;
	i = 0;
	while (i < (len - 1) * tsize)
	{
		j = i + tsize;
		while (j < len * tsize)
		{
			if (ft_vcmp(&a[i], &a[j], tsize, isasd) > 0)
				ft_vswap(&a[i], &a[j], tsize);
			j += tsize;
		}
		i += tsize;
	}
}
