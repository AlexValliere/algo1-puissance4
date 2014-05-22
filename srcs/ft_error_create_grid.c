/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_create_grid.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 00:40:32 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:36:59 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../includes/puissance4.h"

void	ft_error_create_grid(int *error, int n, int print)
{
	if (ft_error("ft_create_grid", error, n, print) == -1)
	{
		if (error[0] != 0)
			ft_printf("\tCannot allocate memory to grid.\n");
		if (error[1] != 0)
			ft_printf("\tCannot allocate memory to pos in grid.\n");
		if (error[2] != 0)
			ft_printf("\tError while creating pos in grid.\n");
	}
}

int		ft_error_create_grid_create_row(int *error, int n, int print)
{
	if (ft_error("ft_create_grid_create_row", error, n, print) == -1)
	{
		if (error[0] != 0)
			ft_printf("\tCannot allocate memory to row dim in pos in grid.\n");
	}
	return (ft_error("", error, 1, 0));
}
