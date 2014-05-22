/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 22:55:56 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 19:56:33 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include "../includes/puissance4.h"

void	ft_pow4_main(char *argv[])
{
	t_grid	*grid;

	grid = NULL;
	if (ft_check_input(argv) == 0)
	{
		grid = ft_create_grid(ft_atoi(argv[1]), ft_atoi(argv[2]));
		ft_start_game(&grid);
	}
	if (grid != NULL)
		free(grid);
}
