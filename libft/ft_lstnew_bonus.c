/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:32:22 by omartine          #+#    #+#             */
/*   Updated: 2021/10/16 20:39:35 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *cont)
{
	t_list	*aux;

	aux = (t_list *) malloc(sizeof(t_list));
	if (!aux)
		return (0);
	aux->content = cont;
	aux->next = 0;
	return (aux);
}
