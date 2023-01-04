/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:32:48 by omartine          #+#    #+#             */
/*   Updated: 2021/10/16 20:20:17 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*string(unsigned int start, size_t i, size_t length, char const *s)
{
	char	*aux;
	int		j;

	j = 0;
	aux = (char *) malloc(sizeof(char) * (length + 1));
	if (!aux)
		return (0);
	if (start >= ft_strlen((const char *)s))
	{
		aux[0] = 0;
		return (aux);
	}
	aux[length] = 0;
	while (start < i)
	{
		aux[j] = s[start];
		j++;
		start++;
	}
	return (aux);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aux;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	i = start;
	j = 0;
	while (s[i] != 0 && (i - start) < len)
		i++;
	aux = string(start, i, i - start, s);
	if (!aux)
		return (0);
	if (start >= ft_strlen((const char *)s))
		return (aux);
	return (aux);
}
