/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_endgame.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 15:26:08 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:34:50 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

int	ft_check_endgame(t_grid *grid)
{
	int	end;

	end = 0;
	end = ft_search_horizontal_win(grid);
	if (end == 0)
	{
		end = ft_search_vertical_win(grid);
		if (end == 0)
		{
			end = ft_search_diagonal_slash_win(grid);
			if (end == 0)
			{
				end = ft_search_diagonal_antislash_win(grid);
				if (end == 0)
					end = (ft_is_grid_full(grid)) ? NO_WINNER : 0;
			}
		}
	}
	return (end);
}
