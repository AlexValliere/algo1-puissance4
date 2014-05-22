/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counter_two_diagonal_token.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 17:47:28 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 19:09:09 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

static int	ft_counter_two_diagonal_antislash_token_sub(t_grid *grid, int col,
											int player_token)
{
	int	play_col;
	int	i;

	play_col = -1;
	i = ft_get_last_empty_pos_from_col(grid, col);
	if (i < grid->row - 1 - 2)
	{
		if (grid->pos[i + 1][col + 1] == grid->pos[i + 2][col + 2]
			&& grid->pos[i + 1][col + 1] == player_token
			&& ft_can_set_token_to(grid, i, col))
			play_col = col;
	}
	return (play_col);
}

int			ft_counter_two_diagonal_antislash_token(t_grid *grid,
													int player_token)
{
	int	play_col;
	int	j;

	play_col = -1;
	j = grid->col - 1 - 2;
	while (j >= 0 && play_col == -1)
	{
		play_col = ft_counter_two_diagonal_antislash_token_sub(grid, j,
															player_token);
		--j;
	}
	return (play_col);
}

static int	ft_counter_two_diagonal_slash_token_sub(t_grid *grid, int col,
											int player_token)
{
	int	play_col;
	int	i;

	play_col = -1;
	i = ft_get_last_empty_pos_from_col(grid, col);
	if (i < grid->row - 1 - 2)
	{
		if (grid->pos[i + 1][col - 1] == grid->pos[i + 2][col - 2]
			&& grid->pos[i + 1][col - 1] == player_token
			&& ft_can_set_token_to(grid, i, col))
			play_col = col;
	}
	return (play_col);
}

int			ft_counter_two_diagonal_slash_token(t_grid *grid, int player_token)
{
	int	play_col;
	int	j;

	play_col = -1;
	j = 2;
	while (j < grid->col && play_col == -1)
	{
		play_col = ft_counter_two_diagonal_slash_token_sub(grid, j,
															player_token);
		++j;
	}
	return (play_col);
}
