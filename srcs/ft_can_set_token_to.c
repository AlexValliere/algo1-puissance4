/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_can_set_token_to.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 15:31:27 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:41:36 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

int	ft_can_set_token_to(t_grid *grid, int row, int col)
{
	int	can;

	can = FALSE;
	if (row == grid->row - 1 && col < grid->col && col >= 0
		&& ft_is_col_empty(grid, col))
		can = TRUE;
	else if (row < grid->row - 1 && row >= 0  && col < grid->col && col >= 0)
	{
		if (grid->pos[row][col] == EMPTY_TOKEN
			&& grid->pos[row + 1][col] != EMPTY_TOKEN)
			can = TRUE;
	}
	return (can);
}
