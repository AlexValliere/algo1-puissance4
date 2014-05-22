/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_col_full.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 14:57:36 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:37:57 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

int	ft_is_col_full(t_grid *grid, int col)
{
	int	full;
	int	i;

	full = TRUE;
	i = 0;
	while (i < grid->row && full)
	{
		if (grid->pos[i][col] == EMPTY_TOKEN)
			full = FALSE;
		++i;
	}
	return (full);
}
