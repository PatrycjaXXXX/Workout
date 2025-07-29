# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/21 14:09:09 by psmolich          #+#    #+#              #
#    Updated: 2025/07/29 06:36:47 by psmolich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:
.Phony: all clean fcleam re

LIB := libft.a
FT := memset bzero memcpy memmove memchr memcmp strlen isalpha isdigit \
			isalnum isascii isprint toupper tolower strchr strrchr strncmp \
			strlcpy strlcat strnstr atoi calloc strdup substr strjoin strtrim \
			split itoa strmapi striteri putchar_fd putstr_fd putendl_fd \
			putnbr_fd atol strcmp strstr\
			check printf put_c_s put_uint_ptr put_int \
			get_next_line \
SRCS := $(patsubst %, ft_%.c, $(FT))
OBJS := $(patsubst %.c, %.o, $(SRCS))
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(LIB)

$(LIB): $(OBJS)
	ar rcs libft.a $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIB)

re : fclean all 
	make clean
