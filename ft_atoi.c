/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutsasak <yutsasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:19:30 by yutsasak          #+#    #+#             */
/*   Updated: 2024/05/06 13:32:56 by yutsasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	res;
	int			sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	while (ft_isdigit(*str))
	{
		if ((res * 10 + (*str - '0')) / 10 != res)
		{
			if (sign == 1)
				return (-1);
			if (sign == -1)
				return (0);
		}
		res = res * 10 + (*str - '0');
		str++;
	}
	return ((int)(res * sign));
}
