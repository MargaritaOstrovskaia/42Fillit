/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:00:06 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/19 19:18:25 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (n > 0 && (dst || src))
	{
		s1 = (unsigned char*)dst;
		s2 = (unsigned char*)src;
		while (n--)
		{
			*s1 = *s2;
			if (*s2 == (unsigned char)c)
				return ((void*)(s1 + 1));
			s1++;
			s2++;
		}
	}
	return (0);
}
