/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_grid_empty.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 01:04:11 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:38:05 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

int	ft_is_grid_empty(t_grid *grid)
{
	int	i;
	int	j;
	int	is_empty;

	i = 0;
	is_empty = TRUE;
	while (i < grid->row && is_empty == TRUE)
	{
		j = 0;
		while (j < grid->col)
		{
			if (grid->pos[i][j] != EMPTY_TOKEN)
				is_empty = FALSE;
			++j;
		}
		++i;
	}
	return (is_empty);
}
