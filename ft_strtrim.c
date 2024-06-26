/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutsasak <yutsasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:34:52 by yutsasak          #+#    #+#             */
/*   Updated: 2024/05/25 20:27:08 by yutsasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_res_size(char *s1, char *set, char **head, char **tail)
{
	char	*trav_set;
	size_t	len;

	trav_set = set;
	len = ft_strlen(s1);
	*head = s1;
	*tail = s1 + (len - 1);
	while (*trav_set)
	{
		while (**head == *trav_set)
		{
			trav_set = set;
			len--;
			(*head)++;
		}
		while (**tail == *trav_set)
		{
			trav_set = set;
			len--;
			(*tail)--;
		}
		trav_set++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res_h;
	char	*trav_res;
	char	*head;
	char	*tail;
	int		res_size;

	if (s1 && set)
	{
		res_size = calc_res_size((char *)s1, (char *)set, &head, &tail);
		if (res_size < 0)
			res_size = 0;
		res_h = ft_calloc((res_size + 1), sizeof(char));
		if (res_h)
		{
			trav_res = res_h;
			while (head <= tail)
				*trav_res++ = *head++;
			return (res_h);
		}
	}
	return (NULL);
}
