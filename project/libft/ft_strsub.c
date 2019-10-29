/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:19:17 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/24 14:19:19 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (!s)
		return (0);
	sub = ft_strnew(len);
	if (sub)
	{
		i = 0;
		while (s[start + i] && i < len)
		{
			sub[i] = s[start + i];
			i++;
		}
		sub[i] = 0;
	}
	return (sub);
}
