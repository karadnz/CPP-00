# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 14:20:11 by mkaraden          #+#    #+#              #
#    Updated: 2023/11/29 19:47:08 by mkaraden         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
SRCS	= megaphone.cpp
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf



.PHONY: all clean re

all: $(NAME)

$(NAME): $(SRCS)
	@printf " 	- Compiling $(NAME)... \n"
	@ $(CC) $(FLAGS) megaphone.cpp -o $(NAME)
	@printf "    - Executable ready.\n"

clean:
	@$(RM) $(NAME)
	@printf "    - Executable removed.\n"

fclean:
	@$(RM) $(NAME)
	@printf "    - Executable removed.\n"

re: clean all