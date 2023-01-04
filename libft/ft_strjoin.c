/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 20:31:05 by omartine          #+#    #+#             */
/*   Updated: 2021/09/28 20:40:46 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*aux;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	aux = (char *) malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!aux)
		return (0);
	while (s1[i] != 0)
	{
		aux[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		aux[i] = s2[j];
		i++;
		j++;
	}
	aux[i] = 0;
	return (aux);
}
