/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:30:02 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/19 09:29:00 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char *tmp;

	tmp = s1 + ft_strlen(s1);
	if (n > 0)
		while (*s2 && n--)
			*tmp++ = *s2++;
	*tmp = 0;
	return (s1);
}
