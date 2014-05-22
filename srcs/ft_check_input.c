/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 23:09:05 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:35:16 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../includes/puissance4.h"

int	ft_check_input(char *argv[])
{
	int	error[5];

	ft_error_init_tab(error, 5);
	if (!ft_strempty(argv[1]) || !ft_strempty(argv[2]))
	{
		if (ft_strlen(argv[1]) > 10 || ft_strlen(argv[2]) > 10)
			error[0] = 1;
		if (!ft_is_int(argv[1]) || !ft_is_int(argv[2]))
			error[1] = 1;
		else
		{
			if (argv[1][0] == '-' || argv[2][0] == '-')
				error[2] = 1;
		}
		if (ft_error_check_input(error, 3, 0) == 0)
		{
			if (ft_atoi(argv[1]) < 6)
				error[3] = 1;
			if (ft_atoi(argv[2]) < 7)
				error[4] = 1;
		}
	}
	return (ft_error_check_input(error, 5, 1));
}
