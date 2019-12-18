# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/18 15:02:01 by ekhanevi          #+#    #+#              #
#    Updated: 2019/12/18 15:16:12 by ekhanevi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c matrices.c solver.c grid.c read_input.c tetro_checker.c

OBJ = $(SRC:.c=.o)

LIBFT = libft/libft.a

HEADER = -c -I lib_fillit.h

all: $(NAME)

$(OBJ): %.o: %.c
		@gcc -c -Wall -Werror -Wextra -I libft/ $< -o $@

$(LIBFT):
	@make -C ./libft

$(NAME): $(LIBFT) $(OBJ)
	@gcc $(OBJ) $(LIBFT) -o $(NAME)

clean:
	make -C ./libft clean
	rm -rf $(OBJ)

fclean: clean
	make -C ./libft fclean
	rm -rf $(NAME)

re: fclean all
