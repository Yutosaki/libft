/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutsasak <yutsasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:17:45 by yutsasak          #+#    #+#             */
/*   Updated: 2024/04/24 22:55:24 by yutsasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*j;
	size_t	js;

	if (s1 && s2)
	{
		js = (ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char);
		j = malloc(js);
		if (j)
		{
			ft_strlcpy(j, s1, ft_strlen(s1) + 1);
			ft_strlcat(j, s2, js);
			return (j);
		}
	}
	return (NULL);
}
