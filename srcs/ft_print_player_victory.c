/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_player_victory.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 00:46:51 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 18:38:44 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_print_player_victory(int player)
{
	ft_printf("               ________________\n");
	ft_printf("              |   PLAYER %d     |_____    __\n", player);
	ft_printf("              |      WON       |     |__|  |_________\n");
	ft_printf("              |________________|     |::|  |        /\n");
	ft_printf(" /\\**/\\       |                \\.____|::|__|      <\n");
	ft_printf("( o_o  )_     |                      \\::/  \\._______\\\n");
	ft_printf(" (u--u   \\_)  |\n");
	ft_printf("  (||___   )==\\\n");
	ft_printf(",dP\"/b/=( /P\"/b\\\n");
	ft_printf("|8 || 8\\=== || 8\n");
	ft_printf("`b,  ,P  `b,  ,P\n");
	ft_printf("  \"\"\"`     \"\"\"`\n");
}
