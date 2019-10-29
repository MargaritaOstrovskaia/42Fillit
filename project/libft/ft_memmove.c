/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 13:36:16 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/24 13:36:18 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	if (dst == src)
		return (dst);
	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	i = 0;
	while (i < len)
	{
		if (s1 < s2)
			s1[i] = s2[i];
		else
			s1[len - i - 1] = s2[len - i - 1];
		i++;
	}
	return (dst);
}
