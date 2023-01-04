/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:00:24 by omartine          #+#    #+#             */
/*   Updated: 2022/05/19 20:13:20 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*aux;

	aux = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	if (!aux)
		return (0);
	while (s[i] != 0)
	{
		aux[i] = s[i];
		i++;
	}
	aux[i] = 0;
	return (aux);
}
