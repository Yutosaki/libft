/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutsasak <yutsasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:45:07 by yutsasak          #+#    #+#             */
/*   Updated: 2024/04/27 15:47:59 by yutsasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	if (count == 0 || size == 0)
	{
		p = malloc(0);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	p = malloc(size * count);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, size * count);
	return (p);
}
