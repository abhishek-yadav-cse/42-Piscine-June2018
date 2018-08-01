# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayadav <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/08 21:26:20 by ayadav            #+#    #+#              #
#    Updated: 2018/07/08 21:26:30 by ayadav           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
FILES = evalexpr helperft_funcs stack_funcs operator_help_funcs operations
SRC_DIR = srcs/
HEADER_DIR= ./includes/
OPTIONS = -Wall -Wextra -Werror
SRCS = $(patsubst %, %.c, $(FILES))
OBINS = $(patsubst %, %.o, $(FILES))

all: $(NAME)

compile:
	@gcc -I$(HEADER_DIR) $(OPTIONS) -c $(patsubst %, $(SRC_DIR)%, $(SRCS))

$(NAME): compile
	@gcc -I$(HEADER_DIR) $(OPTIONS) main.c $(OBINS) -o $(NAME)

clean:
	@/bin/rm -f $(OBINS) 

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
