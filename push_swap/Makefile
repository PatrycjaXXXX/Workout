# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/21 13:20:43 by psmolich          #+#    #+#              #
#    Updated: 2025/07/29 08:41:19 by psmolich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:
.PHONY: all bonus clean fclean re reb

PUSHSWAP := push_swap
CHECKER := checker
LIB := libft/libft.a
LST := lst_utils/ft_lstnew.c \
		lst_utils/ft_lstadd_front.c \
		lst_utils/ft_lstsize.c \
		lst_utils/ft_lstlast.c \
		lst_utils/ft_lstadd_back.c \
# 		lst_utils/ft_lstdelone.c \
# 		lst_utils/ft_lstclear.c \
# 		lst_utils/ft_lstiter.c \
# 		lst_utils/ft_lstmap.c \

PUSHSWAP_SRCS := push_swap.c 
CHECKER_SRCS := checker.c arg_center.c
CC := cc
CFLAGS := -Wall -Wextra -Werror

all: $(PUSHSWAP)

bonus: $(CHECKER) 

$(PUSHSWAP): $(LIB)
	$(CC) $(CFLAGS) -o $(PUSHSWAP) $(PUSHSWAP_SRCS) $(LIB)

$(CHECKER): $(LIB)
	$(CC) $(CFLAGS) -o $(CHECKER) $(CHECKER_SRCS) $(LST) $(LIB)

$(LIB):
	make -C libft/
# 	make clean -C libft/

clean:
	make clean -C libft/
	
fclean: clean
	rm -f $(PUSHSWAP)
	rm -f $(CHECKER)
	make fclean -C libft/

re: fclean all
	make clean

reb: fclean bonus
	make clean