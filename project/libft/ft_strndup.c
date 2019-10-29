/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:37:48 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/24 14:40:40 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, int n)
{
	char	*s2;
	int		len;

	len = ft_strlen(s1);
	len = len < n ? len : n;
	s2 = ft_strnew(len);
	if (s2)
		return (ft_strncpy(s2, s1, n));
	return (0);
}
