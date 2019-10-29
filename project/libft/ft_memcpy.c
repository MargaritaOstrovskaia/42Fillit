/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 18:38:50 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/19 18:48:32 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (n > 0 && (dst || src))
	{
		s1 = (unsigned char*)dst;
		s2 = (unsigned char*)src;
		while (n--)
			*s1++ = *s2++;
	}
	return (dst);
}
