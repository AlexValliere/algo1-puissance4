/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_last_empty_pos_from_col.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 01:35:39 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:37:26 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

int	ft_get_last_empty_pos_from_col(t_grid *grid, int col)
{
	int	i;

	if (col >= grid->col || col < 0)
		return (-1);
	i = grid->row - 1;
	while (i >= 0)
	{
		if (grid->pos[i][col] == EMPTY_TOKEN)
			return (i);
		--i;
	}
	return (-1);
}
