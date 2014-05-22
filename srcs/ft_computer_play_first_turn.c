/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_computer_play_first_turn.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 15:19:28 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 19:09:22 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/puissance4.h"

static int	ft_computer_play_first_turn_search_player_one(t_grid *grid)
{
	int	player_one_pos;
	int	j;

	player_one_pos = -1;
	j = 0;
	while (j < grid->col && player_one_pos == -1)
	{
		if (grid->pos[grid->row - 1][j] == PLAYER_ONE_TOKEN)
			player_one_pos = j;
		++j;
	}
	return (player_one_pos);
}

int			ft_computer_play_first_turn(t_grid *grid, int play_first)
{
	int	play_col;

	play_col = grid->col / 2;
	if (!play_first)
	{
		if (!ft_is_col_empty(grid, play_col))
			play_col = (rand() % 2) ? --play_col : ++play_col;
		else
		{
			play_col = ft_computer_play_first_turn_search_player_one(grid);
			if (play_col < grid->col / 4)
				++play_col;
			else
				--play_col;
		}
	}
	return (play_col);
}
