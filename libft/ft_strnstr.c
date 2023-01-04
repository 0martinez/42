/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 19:06:46 by omartine          #+#    #+#             */
/*   Updated: 2022/05/19 20:13:46 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *dst, size_t len)
{
	size_t	i;
	size_t	j;

	if (!dst[0])
		return ((char *)str);
	i = 0;
	j = 0;
	while (i < len && str[i])
	{
		j = 0;
		while (str[i + j] && dst[j] && i + j < len && str[i + j] == dst[j])
			j++;
		if (!dst[j])
			return ((char *)str + i);
		i++;
	}
	return (0);
}
