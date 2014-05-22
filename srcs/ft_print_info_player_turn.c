/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_info_player_turn.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 19:34:08 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 19:39:39 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../includes/puissance4.h"

void	ft_print_info_player_turn(int player)
{
	if (player == 1)
		ft_printf("\033[46m");
	else if (player == 2)
		ft_printf("\033[42m");
	ft_printf("[Player %d turn]\033[0m\n", player);
}
