/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_check_input.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 23:27:56 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:36:53 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../includes/puissance4.h"

int	ft_error_check_input(int *error, int n, int print)
{
	if (ft_error("ft_check_input", error, n, print) == -1)
	{
		if (error[0] != 0)
			ft_printf("\trow and col must be 10 digits max.\n");
		if (error[1] != 0 || error[2] != 0)
			ft_printf("\trow and col must be positive integers.\n");
		if (error[3] != 0)
			ft_printf("\trow parameter must be superior or equal to 6.\n");
		if (error[4] != 0)
			ft_printf("\tcol parameter must be superior or equal to 7.\n");
	}
	return (ft_error("", error, 5, 0));
}
