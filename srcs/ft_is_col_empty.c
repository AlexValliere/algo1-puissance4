/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_col_empty.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 01:19:09 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:37:42 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/puissance4.h"

int	ft_is_col_empty(t_grid *grid, int col)
{
	int	empty;
	int	i;

	empty = TRUE;
	i = 0;
	while (i < grid->row && empty)
	{
		if (grid->pos[i][col] != EMPTY_TOKEN)
			empty = FALSE;
		++i;
	}
	return (empty);
}
