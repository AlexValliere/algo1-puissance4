/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_valid_col_input.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 14:38:03 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 20:02:44 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include "../includes/puissance4.h"

int		ft_get_valid_col_input(int col_max)
{
	char	*line;
	int		valid;

	valid = FALSE;
	while (!valid)
	{
		ft_printf("In which column do you want to place your token ");
		ft_printf("[Choose between %d and %d] : ", 0, col_max - 1);
		if (get_next_line(STDIN, &line) > 0)
		{
			if (!ft_strempty(line))
			{
				if (ft_strlen(line) < 11)
				{
					if (ft_is_int(line))
						valid = (ft_atoi(line) < col_max) ? TRUE : FALSE;
				}
			}
		}
		else
			ft_printf("Error in ft_get_valid_col_input while reading.\n");
	}
	if (line != NULL)
		free(line);
	return (ft_atoi(line));
}
