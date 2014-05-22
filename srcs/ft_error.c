/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 23:28:28 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:36:28 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_error_init_tab(int *error, int n)
{
	int			i;

	i = 0;
	while (i < n)
	{
		error[i] = 0;
		++i;
	}
}

int		ft_error(char *function, int *error, int n, int print)
{
	int			i;

	i = 0;
	while (i < n)
	{
		if (error[i] != 0)
		{
			if (print == 1)
				ft_printf("Error in %s:\n", function);
			return (-1);
		}
		++i;
	}
	return (0);
}
