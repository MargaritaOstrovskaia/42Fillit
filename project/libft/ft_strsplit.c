/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:19:05 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/24 14:19:07 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getpcount(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	ft_issaveparam(char **dest, int p, char const *src, char c)
{
	int len;

	len = 0;
	while (src[len] && src[len] != c)
		len++;
	dest[p] = ft_strndup(src, len);
	if (dest)
		return (1);
	return (0);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		len;
	char	**res;

	if (!s || !c)
		return (NULL);
	len = ft_getpcount(s, c) + 1;
	if (!(res = (char**)malloc(sizeof(char*) * len)))
		return (0);
	i = 0;
	j = 0;
	while (len > 0 && s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			if (!ft_issaveparam(res, j, &s[i], c))
				return (0);
			len--;
			j++;
		}
		i++;
	}
	res[j] = 0;
	return (res);
}
