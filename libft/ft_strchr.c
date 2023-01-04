/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:43:05 by omartine          #+#    #+#             */
/*   Updated: 2022/05/19 20:13:14 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int x)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == (char )x)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == (char )x)
		return ((char *)str + i);
	return (0);
}
