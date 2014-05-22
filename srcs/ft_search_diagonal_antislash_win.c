/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_diagonal_antislash_win.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 00:18:16 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 19:07:33 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

static int	ft_search_diagonal_antislash_win_from_top_to_bot(t_grid *grid)
{
	int	i;
	int	j;
	int	k;
	int	aligned_token;
	int	is_win;

	i = 0;
	is_win = FALSE;
	while (i < grid->row && !is_win)
	{
		j = grid->col - 1;
		k = i;
		aligned_token = 1;
		while (k > 0 && j > 0 && grid->pos[k][j] == grid->pos[k - 1][j - 1]
				&& aligned_token < 5 && grid->pos[k][j] != EMPTY_TOKEN)
		{
			++aligned_token;
			--k;
			--j;
		}
		is_win = (aligned_token >= 4) ? TRUE : FALSE;
		++i;
	}
	return (is_win);
}

static int	ft_search_diagonal_antislash_win_from_bot_to_left(t_grid *grid)
{
	int	i;
	int	j;
	int	k;
	int	aligned_token;
	int	is_win;

	j = grid->col - 1;
	is_win = FALSE;
	while (j >= 0 && !is_win)
	{
		i = grid->row - 1;
		k = j;
		aligned_token = 1;
		while (i > 0 && k > 0 && grid->pos[i][k] == grid->pos[i - 1][k - 1]
				&& aligned_token < 5 && grid->pos[i][k] != EMPTY_TOKEN)
		{
			++aligned_token;
			--i;
			--k;
		}
		is_win = (aligned_token >= 4) ? TRUE : FALSE;
		--j;
	}
	return (is_win);
}

int			ft_search_diagonal_antislash_win(t_grid *grid)
{
	int	is_win;

	is_win = FALSE;
	is_win = ft_search_diagonal_antislash_win_from_top_to_bot(grid);
	if (is_win == FALSE)
		is_win = ft_search_diagonal_antislash_win_from_bot_to_left(grid);
	return (is_win);
}
