/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:08:39 by omartine          #+#    #+#             */
/*   Updated: 2021/10/07 19:23:45 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*aux;

	if (!s)
		return (0);
	i = 0;
	i = (unsigned int)ft_strlen((const char *)s);
	aux = (char *) malloc(sizeof(char) * i + 1);
	if (!aux)
		return (0);
	i = 0;
	while (s[i] != 0)
	{
		aux[i] = f(i, s[i]);
		i++;
	}
	aux[i] = 0;
	return (aux);
}
