# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apetit <apetit@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/24 21:56:51 by apetit            #+#    #+#              #
#    Updated: 2014/03/09 19:34:47 by apetit           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= clang
NAME		= puissance4
SRC			=	srcs/main.c \
				srcs/ft_add_player_token.c \
				srcs/ft_check_input.c \
				srcs/ft_check_endgame.c \
				srcs/ft_can_horizontal_win.c \
				srcs/ft_can_set_token_to.c \
				srcs/ft_can_vertical_win.c \
				srcs/ft_computer_can_win_turn.c \
				srcs/ft_computer_play.c \
				srcs/ft_computer_play_empty.c \
				srcs/ft_computer_play_first_turn.c \
				srcs/ft_computer_turn.c \
				srcs/ft_counter_discontinued_token.c \
				srcs/ft_counter_two_aligned_token.c \
				srcs/ft_counter_two_diagonal_token.c \
				srcs/ft_counter_two_horizontal_token.c \
				srcs/ft_counter_two_vertical_token.c \
				srcs/ft_create_grid.c \
				srcs/ft_get_last_empty_pos_from_col.c \
				srcs/ft_get_valid_col_input.c \
				srcs/ft_is_col_empty.c \
				srcs/ft_is_col_full.c \
				srcs/ft_is_grid_empty.c \
				srcs/ft_is_grid_full.c \
				srcs/ft_player_turn.c \
				srcs/ft_print_grid.c \
				srcs/ft_print_info_player_turn.c \
				srcs/ft_print_player_victory.c \
				srcs/ft_search_diagonal_antislash_win.c \
				srcs/ft_search_diagonal_slash_win.c \
				srcs/ft_search_horizontal_win.c \
				srcs/ft_search_vertical_win.c \
				srcs/ft_start_game.c \
				srcs/ft_error.c \
				srcs/ft_error_check_input.c \
				srcs/ft_error_create_grid.c \
				srcs/ft_error_print_grid.c \
				srcs/puissance4.c
OBJ			= $(SRC:.c=.o)
CFLAGS		= -Wall -Werror -Wextra
LIBFT_DIR	= ./libft
RM			= rm -rf

all:		make_lib $(NAME)

$(NAME):	$(OBJ)
			$(CC) -o $(NAME) $(OBJ) -L $(LIBFT_DIR)/ -lft

make_lib:
			cd $(LIBFT_DIR) && $(MAKE)

clean:
			cd $(LIBFT_DIR) && $(MAKE) $@
			$(RM) $(OBJ)

fclean:		clean
			cd $(LIBFT_DIR) && $(MAKE) $@
			$(RM) $(NAME)

re:			fclean all

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -I $(LIBFT_DIR)/includes/ -o $@ -g

.PHONY:		all clean re fclean
