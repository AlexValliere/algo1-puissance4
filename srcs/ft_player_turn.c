/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player_turn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 14:43:27 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 19:39:52 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../includes/puissance4.h"

void		ft_player_turn(t_grid **grid, int player)
{
	int	input;

	ft_print_grid(*grid);
	ft_print_info_player_turn(player);
	input = ft_get_valid_col_input((*grid)->col);
	while (ft_is_col_full(*grid, input))
		input = ft_get_valid_col_input((*grid)->col);
	ft_add_player_token(&(*grid), player, input);
	ft_printf("\n\n");
}
