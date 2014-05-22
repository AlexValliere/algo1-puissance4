/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_computer_can_win_turn.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 15:18:41 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 19:41:49 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

int		ft_computer_can_win_turn(t_grid *grid)
{
	int	play_col;

	play_col = -1;
	play_col = ft_can_horizontal_win(grid, PLAYER_TWO_TOKEN);
	if (play_col == -1)
		play_col = ft_can_vertical_win(grid, PLAYER_TWO_TOKEN);
	if (play_col == -1)
		play_col = ft_counter_two_aligned_token(grid, PLAYER_ONE_TOKEN);
	return (play_col);
}
