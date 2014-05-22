/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 22:55:49 by apetit            #+#    #+#             */
/*   Updated: 2014/03/09 19:39:45 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUISSANCE4_H
# define PUISSANCE4_H

# define STDIN	0
# define STDOUT	1

# define FALSE	0
# define TRUE	1

# define PLAYER_ONE	1
# define PLAYER_TWO	2

# define EMPTY_TOKEN		'.'
# define PLAYER_ONE_TOKEN	'X'
# define PLAYER_TWO_TOKEN	'O'

# define NO_WINNER			10
# define PLAYER_ONE_WIN		11
# define PLAYER_TWO_WIN 	12

typedef struct	s_grid
{
	int			**pos;
	int			col;
	int			row;
}				t_grid;

/*
**	Main function
*/
void	ft_pow4_main(char *argv[]);

/*
**	Check input functions
*/
int		ft_check_input(char *argv[]);
int		ft_get_valid_col_input(int col_max);

/*
**	Grid functions
*/
t_grid	*ft_create_grid(int row, int col);
void	ft_print_grid(t_grid *grid);
int		ft_is_col_empty(t_grid *grid, int col);
int		ft_is_col_full(t_grid *grid, int col);
int		ft_is_grid_full(t_grid *grid);
int		ft_is_grid_empty(t_grid *grid);
int		ft_get_last_empty_pos_from_col(t_grid *grid, int col);

/*
**	Game functions
*/
void	ft_start_game(t_grid **grid);
void	ft_player_turn(t_grid **grid, int player);
void	ft_add_player_token(t_grid **grid, int player, int col);
int		ft_check_endgame(t_grid *grid);
int		ft_search_horizontal_win(t_grid *grid);
int		ft_search_vertical_win(t_grid *grid);
int		ft_search_diagonal_antislash_win(t_grid *grid);
int		ft_search_diagonal_slash_win(t_grid *grid);
void	ft_print_player_victory(int player);
int		ft_can_set_token_to(t_grid *grid, int row, int col);
void	ft_print_info_player_turn(int player);

/*
**	IA
*/
void	ft_computer_turn(t_grid **grid);
int		ft_computer_play_first_turn(t_grid *grid, int play_first);
int		ft_computer_can_win_turn(t_grid *grid);
int		ft_can_horizontal_win(t_grid *grid, int player_token);
int		ft_can_vertical_win(t_grid *grid, int player_token);
int		ft_counter_two_aligned_token(t_grid *grid, int player_token);
int		ft_counter_two_horizontal_token(t_grid *grid, int player_token);
int		ft_counter_two_vertical_token(t_grid *grid, int player_token);
int		ft_counter_discontinued_token(t_grid *grid, int player_token);
int		ft_counter_two_diagonal_slash_token(t_grid *grid, int player_token);
int		ft_counter_two_diagonal_antislash_token(t_grid *grid, int player_token);
int		ft_computer_play(t_grid *grid);
int		ft_computer_play_empty(t_grid *grid);

/*
**	ft_error*.c - Error functions
*/
void	ft_error_init_tab(int *error, int n);
int		ft_error(char *function, int *error, int n, int print);
int		ft_error_check_input(int *error, int n, int print);
void	ft_error_create_grid(int *error, int n, int print);
int		ft_error_create_grid_create_row(int *error, int n, int print);
int		ft_error_print_grid(int *error, int n, int print);

#endif
