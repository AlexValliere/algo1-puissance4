/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_horizontal_win.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 00:09:33 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:39:18 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

static int	ft_search_horizontal_win_sub(t_grid *grid, int row)
{
	int	j;
	int	aligned_token;
	int	is_win;

	j = 0;
	aligned_token = 1;
	is_win = FALSE;
	while (j < grid->col && !is_win)
	{
		while (j < grid->col - 1
				&& grid->pos[row][j] == grid->pos[row][j + 1]
				&& aligned_token < 5
				&& grid->pos[row][j] != EMPTY_TOKEN)
		{
			++aligned_token;
			++j;
		}
		if (aligned_token >= 4)
			is_win = TRUE;
		else
			aligned_token = 1;
		++j;
	}
	return (is_win);
}

int			ft_search_horizontal_win(t_grid *grid)
{
	int	i;
	int	is_win;

	i = 0;
	is_win = FALSE;
	while (i < grid->row && !is_win)
	{
		is_win = ft_search_horizontal_win_sub(grid, i);
		++i;
	}
	return (is_win);
}
