/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_computer_turn.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 00:56:56 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 19:40:19 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../includes/puissance4.h"

int		ft_computer_play_other_turns(t_grid *grid)
{
	int	play_col;

	play_col = ft_computer_can_win_turn(grid);
	if (play_col == -1)
		play_col = ft_counter_two_aligned_token(grid, PLAYER_ONE_TOKEN);
	if (play_col == -1)
		play_col = ft_counter_discontinued_token(grid, PLAYER_ONE_TOKEN);
	if (play_col == -1)
		play_col = ft_computer_play(grid);
	if (play_col == -1)
		play_col = ft_computer_play_empty(grid);
	return (play_col);
}

int		ft_computer_play_second_turn(t_grid *grid)
{
	int	play_col;

	play_col = grid->col / 2;
	if (grid->pos[grid->row - 1][play_col] == PLAYER_TWO_TOKEN)
	{
		if (grid->pos[grid->row - 1][play_col - 1] == PLAYER_ONE_TOKEN)
			--play_col;
		if (grid->pos[grid->row - 1][play_col + 1] == PLAYER_ONE_TOKEN)
			++play_col;
	}
	return (play_col);
}

void	ft_computer_turn(t_grid **grid)
{
	static int	turn = 0;
	static int	play_first = FALSE;
	int			play_col;

	ft_print_info_player_turn(PLAYER_TWO);
	play_col = 0;
	if (ft_is_grid_empty(*grid))
		play_first = TRUE;
	if (turn == 0)
		play_col = ft_computer_play_first_turn(*grid, play_first);
	else if (turn == 1 && play_first)
		play_col = ft_computer_play_second_turn(*grid);
	else
		play_col = ft_computer_play_other_turns(*grid);
	if (ft_can_set_token_to(*grid,
							ft_get_last_empty_pos_from_col(*grid, play_col),
															play_col))
		ft_add_player_token(&(*grid), PLAYER_TWO, play_col);
	ft_printf("Computer played a token in column %d.\n\n", play_col);
	turn++;
}
