/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasakiyuto <sasakiyuto@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:45:07 by yutsasak          #+#    #+#             */
/*   Updated: 2024/10/28 08:47:09 by sasakiyuto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

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
