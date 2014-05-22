/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counter_two_vertical_token.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 17:23:33 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 17:23:51 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

static int	ft_counter_two_vertical_token_sub(t_grid *grid, int col,
												int player_token)
{
	int	i;
	int	play_col;

	i = grid->row - 1;
	play_col = -1;
	while (i > 0 && play_col == -1)
	{
		if (i > 0 && grid->pos[i][col] == grid->pos[i - 1][col]
				&& grid->pos[i][col] == player_token)
		{
			if (ft_can_set_token_to(grid, i - 2, col))
				play_col = col;
		}
		--i;
	}
	return (play_col);
}

int	ft_counter_two_vertical_token(t_grid *grid, int player_token)
{
	int	j;
	int	play_col;

	j = 0;
	play_col = -1;
	while (j < grid->col && play_col == -1)
	{
		play_col = ft_counter_two_vertical_token_sub(grid, j, player_token);
		++j;
	}
	return (play_col);
}
