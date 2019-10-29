/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:52:07 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/19 18:59:01 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	sign;
	int	result;

	while (*str && (*str == 32 || (*str >= 9 && *str <= 13)))
		str++;
	sign = 1;
	if (*str && *str == '-')
		sign = -1;
	if (*str != 0 && (*str == '+' || *str == '-'))
		str++;
	result = 0;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		result = result * 10 + (*str - '0') * sign;
		str++;
	}
	return (result);
}
