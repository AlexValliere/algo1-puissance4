/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counter_two_aligned_token.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 16:38:52 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:07:31 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

int	ft_counter_two_aligned_token(t_grid *grid, int player_token)
{
	int	play_col;

	play_col = ft_counter_two_horizontal_token(grid, player_token);
	if (play_col == -1)
		play_col = ft_counter_two_vertical_token(grid, player_token);
	if (play_col == -1)
		play_col = ft_counter_two_diagonal_slash_token(grid, player_token);
	if (play_col == -1)
		play_col = ft_counter_two_diagonal_antislash_token(grid, player_token);
	return (play_col);
}
