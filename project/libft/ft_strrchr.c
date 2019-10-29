/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:17:18 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/19 18:16:30 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	if (c == 0 && c == s[i])
		return ((char*)(s + i));
	while (--i >= 0)
	{
		if (s[i] == c)
			return ((char*)(s + i));
	}
	return (NULL);
}
