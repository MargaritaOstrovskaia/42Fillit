/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 09:25:48 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/30 09:35:46 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_ssort(void *adr, int len, int tsize, int isasd)
{
	int				i;
	int				j;
	int				smallest;
	unsigned char	*a;

	if (!adr || len < 2 || tsize < 1 || isasd < 0 || isasd > 1)
		return ;
	a = (unsigned char *)adr;
	i = 0;
	while (i < (len - 1) * tsize)
	{
		smallest = i;
		j = i;
		while (j < len * tsize)
		{
			if (ft_vcmp(&a[smallest], &a[j], tsize, isasd) > 0)
				smallest = j;
			j += tsize;
		}
		ft_vswap(&a[smallest], &a[i], tsize);
		i += tsize;
	}
}
