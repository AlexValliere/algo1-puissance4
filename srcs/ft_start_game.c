/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_game.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 14:06:23 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:39:35 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdlib.h>
#include <libft.h>
#include "../includes/puissance4.h"

void		ft_start_game(t_grid **grid)
{
	int		end;
	int		player;

	end = FALSE;
	srand(time(NULL));
	player = rand() % 2 + 1;
	while (end == FALSE)
	{
		if (player == 1)
			ft_player_turn(&(*grid), player);
		else
			ft_computer_turn(&(*grid));
		end = ft_check_endgame(*grid);
		player = (player == 1) ? 2 : 1;
	}
	ft_print_grid(*grid);
	ft_printf("\nEnd of the game :\n");
	if (end == NO_WINNER)
		ft_printf("The grid is full and there is no winner.\n");
	else
		ft_print_player_victory((player == 1) ? 2 : 1);
}
