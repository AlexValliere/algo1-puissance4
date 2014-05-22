/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_print_grid.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 01:21:30 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:37:08 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../includes/puissance4.h"

int	ft_error_print_grid(int *error, int n, int print)
{
	if (ft_error("ft_print_grid", error, n, print) == -1)
	{
		if (error[0] != 0)
			ft_printf("\tInvalid col length.\n");
		if (error[1] != 0 || error[2] != 0)
			ft_printf("\tInvalid row length.\n");
	}
	return (ft_error("", error, 2, 0));
}
