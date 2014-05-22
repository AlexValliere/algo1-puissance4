/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counter_discontinued_token.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 17:27:44 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 17:46:41 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

static int	ft_counter_discontinued_token_sub(t_grid *grid, int row,
												int player_token)
{
	int	j;
	int	play_col;

	j = 0;
	play_col = -1;
	while (j < grid->col - 2 && play_col == -1)
	{
		if (j < grid->col - 2 && grid->pos[row][j] == grid->pos[row][j + 2]
				&& grid->pos[row][j] == player_token)
		{
			if ((ft_can_set_token_to(grid, row, j + 1) && j + 3 < grid->col)
				|| (ft_can_set_token_to(grid, row, j + 1) && j + 1 < grid->col
					&& j - 1 > 0 && grid->pos[row][j - 1] == EMPTY_TOKEN)
				|| (ft_can_set_token_to(grid, row, j + 1) && j - 1 < 0))
				play_col = j + 1;
		}
		++j;
	}
	return (play_col);
}

int			ft_counter_discontinued_token(t_grid *grid, int player_token)
{
	int	i;
	int	play_col;

	i = 0;
	play_col = -1;
	while (i < grid->row && play_col == -1)
	{
		play_col = ft_counter_discontinued_token_sub(grid, i, player_token);
		++i;
	}
	return (play_col);
}
