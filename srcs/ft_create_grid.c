/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_grid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 00:20:57 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:36:16 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/puissance4.h"

static void	ft_create_grid_create_col(int **pos, int row, int col)
{
	int		i;

	i = 0;
	while (i < col)
	{
		pos[row][i] = EMPTY_TOKEN;
		++i;
	}
}

static int	ft_create_grid_create_row(t_grid **grid, int row, int col)
{
	int		error[1];
	int		i;

	ft_error_init_tab(error, 1);
	i = 0;
	while (i < row)
	{
		(*grid)->pos[i] = NULL;
		(*grid)->pos[i] = malloc(col * sizeof(int));
		if ((*grid)->pos[i] == NULL)
		{
			error[0] = 1;
			return (ft_error_create_grid_create_row(error, 1, 1));
		}
		else
		{
			(*grid)->col = col;
			ft_create_grid_create_col((*grid)->pos, i, col);
		}
		++i;
	}
	return (ft_error_create_grid_create_row(error, 1, 1));
}

t_grid		*ft_create_grid(int row, int col)
{
	int		error[3];
	t_grid	*grid;

	ft_error_init_tab(error, 2);
	grid = NULL;
	grid = malloc(sizeof(t_grid));
	if (grid != NULL)
	{
		grid->pos = NULL;
		grid->pos = malloc(row * sizeof(int *));
		if (grid->pos != NULL)
		{
			grid->row = row;
			error[2] = ft_create_grid_create_row(&grid, row, col);
		}
		else
			error[1] = 1;
	}
	else
		error[0] = 1;
	ft_error_create_grid(error, 3, 1);
	return (grid);
}
