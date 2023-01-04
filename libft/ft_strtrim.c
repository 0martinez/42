/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 20:42:15 by omartine          #+#    #+#             */
/*   Updated: 2022/05/19 20:13:53 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_aux(char const *s1, char const *set, size_t j, size_t i)
{
	while (set[j] != 0 && s1[i] != 0)
	{
		if (set[j] != s1[i])
			j++;
		else
		{
			j = 0;
			i++;
		}
	}
	return (i);
}

static size_t	ft_aux2(char const *s1, char const *set, size_t j, size_t z)
{
	j = ft_strlen((const char *)s1);
	while (set[z] != 0)
	{
		if (set[z] != s1[j - 1])
			z++;
		else
		{
			z = 0;
			j--;
		}
	}
	return (j);
}

static char	*assignment(char *aux, char const *s1, size_t i, size_t j)
{
	size_t	z;

	z = 0;
	while (i < j)
	{
		aux[z] = s1[i];
		i++;
		z++;
	}
	aux[z] = 0;
	return (aux);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	z;
	char	*aux;

	i = 0;
	j = 0;
	z = 0;
	if (s1 == 0)
		return (0);
	i = ft_aux(s1, set, j, i);
	if (s1[i] == 0)
	{
		aux = (char *) malloc(sizeof(char) * 1);
		if (!aux)
			return (0);
		aux[0] = 0;
		return (aux);
	}
	j = ft_aux2(s1, set, j, z);
	aux = (char *) malloc (sizeof(char) * (j - i + 1));
	if (!aux)
		return (0);
	return (aux = assignment(aux, s1, i, j));
}
