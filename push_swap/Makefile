# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/21 13:20:43 by psmolich          #+#    #+#              #
#    Updated: 2025/07/25 15:19:24 by psmolich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:
.PHONY: all bonus clean fclean re

NAME := push_swap
CHECKER := checker
LIB := libft/libft.a
SRCS := push_swap.c 
CHECKER_SRCS := checker.c arg_center.c
CC := cc
CFLAGS := -Wall -Wextra -Werror

all: $(NAME)

bonus: $(CHECKER) 

$(NAME): $(LIB)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS) $(LIB)

$(CHECKER): $(LIB)
	$(CC) $(CFLAGS) -o $(CHECKER) $(CHECKER_SRCS) $(LIB)

$(LIB):
	make -C libft/

clean:
	make clean -C libft/
	rm -f $(LIB)
	
fclean: clean
	rm -f $(NAME)
	rm -f $(CHECKER)
	make fclean -C libft/

re: fclean all