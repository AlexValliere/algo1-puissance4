/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_computer_play.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 19:12:12 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 19:23:39 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

int	ft_computer_play(t_grid *grid)
{
	int	i;
	int	j;
	int	play_col;

	j = 0;
	play_col = -1;
	while (j < grid->col && play_col == -1)
	{
		i = ft_get_last_empty_pos_from_col(grid, j);
		if ((i + 1 < grid->row && grid->pos[i + 1][j] == PLAYER_TWO_TOKEN
			&& i > 1)
			|| (i + 2 < grid->row && grid->pos[i + 1][j] == PLAYER_TWO_TOKEN
				&& grid->pos[i + 2][j] == PLAYER_TWO_TOKEN && i > 0)
			|| (i + 3 < grid->row && grid->pos[i + 1][j] == PLAYER_TWO_TOKEN
				&& grid->pos[i + 2][j] == PLAYER_TWO_TOKEN
				&& grid->pos[i + 3][j] == PLAYER_TWO_TOKEN && i == 0))
			play_col = j;
		++j;
	}
	return (play_col);
}
