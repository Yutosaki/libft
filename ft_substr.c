/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutsasak <yutsasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:15:54 by yutsasak          #+#    #+#             */
/*   Updated: 2024/05/06 13:40:22 by yutsasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subset;
	size_t	size;

	if (!s)
		return (0);
	if (start > (unsigned int) ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	subset = (char *)malloc(sizeof(char) * (len + 1));
	if (!subset)
		return (0);
	ft_strlcpy(subset, s + start, len + 1);
	return (subset);
}
