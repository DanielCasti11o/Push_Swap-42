# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/27 17:07:22 by dacastil          #+#    #+#              #
#    Updated: 2025/02/11 15:35:47 by dacastil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -g3 #-fsanitize=address
RM = rm -f
EXEC = push_swap
SRC = utils_libft.c ft_atol.c ft_split.c inits.c \
		checkargs.c checkrepeat.c parseo.c insert_to_list.c \
		sort_to_index.c push.c rotate.c swaps.c reverse_rotate.c \
		minor_algorithm.c sqrt.c ft_K_sort.c ft_sort.c push_swap.c ft_lsts.c

OBJ = $(SRC:.c=.o)
INCLUDE = push_swap.h

all = $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(EXEC)

re: fclean $(EXEC)

.PHONY: all clean fclean re
