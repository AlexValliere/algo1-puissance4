/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_computer_play_empty.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 19:25:53 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 19:26:48 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

int	ft_computer_play_empty(t_grid *grid)
{
	int	i;
	int	j;
	int	play_col;

	j = 0;
	play_col = -1;
	while (j < grid->col && play_col == -1)
	{
		i = ft_get_last_empty_pos_from_col(grid, j);
		if (i != -1)
			play_col = j;
		++j;
	}
	return (play_col);
}

