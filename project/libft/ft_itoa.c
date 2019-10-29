/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 13:34:16 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/24 13:34:19 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		sign;
	int		len;
	char	*s;

	len = ft_getlcount(n);
	s = ft_strnew(len);
	if (!s)
		return (0);
	s[len] = 0;
	if (n == 0)
		s[0] = '0';
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		s[0] = '-';
	}
	while (n)
	{
		s[--len] = (n % 10) * sign + '0';
		n = n / 10;
	}
	return (s);
}
