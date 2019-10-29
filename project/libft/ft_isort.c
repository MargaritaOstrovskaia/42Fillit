/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 09:15:20 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/30 09:17:40 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_isort(void *adr, int len, int tsize, int isasd)
{
	int				i;
	unsigned char	*a;
	int				inspos;
	unsigned char	*insvalue;

	if (!adr || len < 2 || tsize < 1 || isasd < 0 || isasd > 1)
		return ;
	a = (unsigned char *)adr;
	if (!(insvalue = (unsigned char*)malloc(tsize)))
		return ;
	i = 1 * tsize;
	while (i < len * tsize)
	{
		inspos = i;
		ft_memcpy(insvalue, &a[i], tsize);
		while (inspos > 0 && ft_vcmp(&a[inspos - 1 * tsize],
					&insvalue[0], tsize, isasd) > 0)
		{
			ft_memcpy(&a[inspos], &a[inspos - 1 * tsize], tsize);
			inspos -= tsize;
		}
		ft_memcpy(&a[inspos], &insvalue[0], tsize);
		i += tsize;
	}
	free(insvalue);
}
