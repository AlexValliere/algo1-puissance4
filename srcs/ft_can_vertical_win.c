/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_can_vertical_win.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 16:00:15 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 19:58:00 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

static int	ft_can_vertical_win_sub(t_grid *grid, int col, int player_token)
{
	int	i;
	int	aligned_token;
	int	play_col;

	i = grid->row - 1;
	aligned_token = 1;
	play_col = -1;
	while (i > 0 && play_col == -1)
	{
		while (i > 0 && grid->pos[i][col] == grid->pos[i - 1][col]
				&& aligned_token <= 3 && grid->pos[i][col] == player_token)
		{
			++aligned_token;
			--i;
		}
		if (aligned_token >= 3 && ft_can_set_token_to(grid, i - 1, col))
			play_col = col;
		else
			aligned_token = 1;
		--i;
	}
	return (play_col);
}


int			ft_can_vertical_win(t_grid *grid, int player_token)
{
	int	j;
	int	play_col;

	j = 0;
	play_col = -1;
	while (j < grid->col && play_col == -1)
	{
		play_col = ft_can_vertical_win_sub(grid, j, player_token);
		++j;
	}
	return (play_col);
}
