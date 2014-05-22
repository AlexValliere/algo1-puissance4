/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_diagonal_slash_win.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 00:16:07 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 19:07:23 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

static int	ft_search_diagonal_slash_win_from_bot_to_top(t_grid *grid)
{
	int	i;
	int	j;
	int	k;
	int	aligned_token;
	int	is_win;

	i = grid->row - 1;
	is_win = FALSE;
	while (i >= 0 && !is_win)
	{
		j = 0;
		k = i;
		aligned_token = 1;
		while (k > 0 && j < grid->col - 1
				&& grid->pos[k][j] == grid->pos[k - 1][j + 1]
				&& aligned_token <= 4 && grid->pos[k][j] != EMPTY_TOKEN)
		{
			++aligned_token;
			--k;
			++j;
		}
		is_win = (aligned_token >= 4) ? TRUE : FALSE;
		--i;
	}
	return (is_win);
}

static int	ft_search_diagonal_slash_win_from_bot_to_right(t_grid *grid)
{
	int	i;
	int	j;
	int	k;
	int	aligned_token;
	int	is_win;

	j = 0;
	is_win = FALSE;
	while (j < grid->col && !is_win)
	{
		i = grid->row - 1;
		k = j;
		aligned_token = 1;
		while (i > 0 && j < grid->col - 1
				&& grid->pos[i][k] == grid->pos[i - 1][k + 1]
				&& aligned_token < 5 && grid->pos[i][k] != EMPTY_TOKEN)
		{
			++aligned_token;
			--i;
			++k;
		}
		is_win = (aligned_token >= 4) ? TRUE : FALSE;
		++j;
	}
	return (is_win);
}

int			ft_search_diagonal_slash_win(t_grid *grid)
{
	int	is_win;

	is_win = FALSE;
	is_win = ft_search_diagonal_slash_win_from_bot_to_top(grid);
	if (is_win == FALSE)
		is_win = ft_search_diagonal_slash_win_from_bot_to_right(grid);
	return (is_win);
}
