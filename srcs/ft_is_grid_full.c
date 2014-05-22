/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_grid_full.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 00:10:27 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:38:20 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

int	ft_is_grid_full(t_grid *grid)
{
	int	i;
	int	j;
	int	is_full;

	i = 0;
	is_full = TRUE;
	while (i < grid->row && is_full == TRUE)
	{
		j = 0;
		while (j < grid->col)
		{
			if (grid->pos[i][j] == EMPTY_TOKEN)
				is_full = FALSE;
			++j;
		}
		++i;
	}
	return (is_full);
}
