/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:33:11 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/19 11:10:43 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len_dest;
	size_t	result;

	len_dest = ft_strlen(dst);
	if (len_dest < dstsize)
		result = ft_strlen(src) + len_dest;
	else
		result = ft_strlen(src) + dstsize;
	while (*src && (len_dest + 1) < dstsize)
	{
		dst[len_dest++] = *src;
		src++;
	}
	dst[len_dest] = 0;
	return (result);
}
