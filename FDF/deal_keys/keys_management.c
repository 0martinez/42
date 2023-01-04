/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys_management.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:00:54 by omartine          #+#    #+#             */
/*   Updated: 2022/04/07 17:16:17 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_fdf.h"

int	deal_key(int key, t_fdf *fdf)
{
	if (key == 53)
	{
		fdf = to_be_free(fdf);
		write(1, "EXIT SUCCES!\n", 13);
		exit (0);
	}
	return (0);
}
