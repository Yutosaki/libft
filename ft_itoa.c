/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutsasak <yutsasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:32:48 by yutsasak          #+#    #+#             */
/*   Updated: 2024/05/08 22:53:29 by yutsasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		n_abs;
	int		i;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_abs = n;
	if (n < 0)
		n_abs = -n;
	i = int_len(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	if (n_abs == 0)
		str[i] = '0';
	while (n_abs > 0)
	{
		str[i--] = (n_abs % 10) + '0';
		n_abs /= 10;
	}
	if (n < 0)
		str[i] = '-';
	return (str);
}
