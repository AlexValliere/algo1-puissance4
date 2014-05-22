/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_player_token.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 15:05:48 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:34:04 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

void	ft_add_player_token(t_grid **grid, int player, int col)
{
	int	i;
	int	free_slot;

	i = (*grid)->row - 1;
	free_slot = FALSE;
	while (i >= 0 && !free_slot)
	{
		if ((*grid)->pos[i][col] == EMPTY_TOKEN)
		{
			free_slot = TRUE;
			if (player == 1)
				(*grid)->pos[i][col] = PLAYER_ONE_TOKEN;
			else if (player == 2)
				(*grid)->pos[i][col] = PLAYER_TWO_TOKEN;
		}
		--i;
	}
}
