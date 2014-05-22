/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counter_two_horizontal_token.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 17:22:54 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 17:37:15 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

static int	ft_counter_two_horizontal_token_sub(t_grid *grid, int row,
												int player_token)
{
	int	j;
	int	play_col;

	j = 0;
	play_col = -1;
	while (j < grid->col && play_col == -1)
	{
		if (j < grid->col - 1 && grid->pos[row][j] == grid->pos[row][j + 1]
				&& grid->pos[row][j] == player_token)
		{
			if (ft_can_set_token_to(grid, row, j + 2) && j + 3 < grid->col)
				play_col = j + 2;
			else if (ft_can_set_token_to(grid, row, j - 1) && j - 2 > 0)
				play_col = j - 1;
		}
		++j;
	}
	return (play_col);
}

int	ft_counter_two_horizontal_token(t_grid *grid, int player_token)
{
	int	i;
	int	play_col;

	i = 0;
	play_col = -1;
	while (i < grid->row && play_col == -1)
	{
		play_col = ft_counter_two_horizontal_token_sub(grid, i, player_token);
		++i;
	}
	return (play_col);
}
