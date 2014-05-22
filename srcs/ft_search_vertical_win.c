/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_vertical_win.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 00:12:10 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:39:32 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

int	ft_search_vertical_win_sub(t_grid *grid, int col)
{
	int	i;
	int	aligned_token;
	int	is_win;

	i = 0;
	aligned_token = 1;
	is_win = FALSE;
	while (i < grid->row && !is_win)
	{
		while (i < grid->row - 1
				&& grid->pos[i][col] == grid->pos[i + 1][col]
				&& aligned_token < 5
				&& grid->pos[i][col] != EMPTY_TOKEN)
		{
			++aligned_token;
			++i;
		}
		if (aligned_token >= 4)
			is_win = TRUE;
		else
			aligned_token = 1;
		++i;
	}
	return (is_win);
}

int	ft_search_vertical_win(t_grid *grid)
{
	int	j;
	int	is_win;

	j = 0;
	is_win = FALSE;
	while (j < grid->col && !is_win)
	{
		is_win = ft_search_vertical_win_sub(grid, j);
		++j;
	}
	return (is_win);
}
