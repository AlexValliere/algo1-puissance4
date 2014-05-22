/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_can_horizontal_win.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 15:24:11 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 19:09:39 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

static int	ft_can_horizontal_win_sub(t_grid *grid, int row, int player_token)
{
	int	j;
	int	aligned_token;
	int	play_col;

	j = 0;
	aligned_token = 1;
	play_col = -1;
	while (j < grid->col && play_col == -1)
	{
		while (j < grid->col - 1 && grid->pos[row][j] == grid->pos[row][j + 1]
				&& aligned_token <= 3 && grid->pos[row][j] == player_token)
		{
			++aligned_token;
			++j;
		}
		if (aligned_token >= 3 && ft_can_set_token_to(grid, row, j + 1))
			play_col = j + 1;
		else if (aligned_token >= 3 && ft_can_set_token_to(grid, row, j - 3))
			play_col = j - 3;
		else
			aligned_token = 1;
		++j;
	}
	return (play_col);
}


int			ft_can_horizontal_win(t_grid *grid, int player_token)
{
	int	i;
	int	play_col;

	i = 0;
	play_col = -1;
	while (i < grid->row && play_col == -1)
	{
		play_col = ft_can_horizontal_win_sub(grid, i, player_token);
		++i;
	}
	return (play_col);
}
