/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 22:55:40 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:39:47 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../includes/puissance4.h"

int		main(int argc, char *argv[])
{
	if (argc == 3)
		ft_pow4_main(argv);
	else
	{
		ft_printf("usage: %s row col\n", argv[0]);
		ft_printf("  row and col must be positive integers.\n");
		ft_printf("  row parameter must be superior or equal to 6.\n");
		ft_printf("  col parameter must be superior or equal to 7.\n");
	}
	return (0);
}
