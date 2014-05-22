/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 00:58:38 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 19:07:54 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../includes/puissance4.h"

void	ft_print_grid_top_header(int col)
{
	int	i;
	int	print;

	i = 0;
	while (i < col)
	{
		print = i;
		while (print > 9)
			print %= 10;
		ft_printf("%d", print);
		if (i != col)
			ft_printf(" ");
		else
			ft_printf("\n");
		++i;
	}
	i = 0;
	ft_printf("\n");
}

void	ft_print_grid_data(t_grid *grid)
{
	int	i;
	int	j;

	i = 0;
	while (i < grid->row)
	{
		j = 0;
		while (j < grid->col)
		{
			if (grid->pos[i][j] == PLAYER_ONE_TOKEN)
				ft_printf("\033[36m%c \033[0m", grid->pos[i][j]);
			else if (grid->pos[i][j] == PLAYER_TWO_TOKEN)
				ft_printf("\033[32m%c \033[0m", grid->pos[i][j]);
			else
				ft_printf("%c ", grid->pos[i][j]);
			++j;
		}
		ft_printf("\n");
		++i;
	}
}

void	ft_print_grid(t_grid *grid)
{
	int	error[2];

	ft_error_init_tab(error, 2);
	if (grid->col < 7)
		error[0] = 1;
	if (grid->row < 6)
		error[1] = 1;
	if (ft_error_print_grid(error, 2, 1) == 0)
	{
		ft_print_grid_top_header(grid->col);
		ft_print_grid_data(grid);
		ft_print_grid_top_header(grid->col);
	}
}
