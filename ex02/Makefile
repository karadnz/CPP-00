# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 22:55:24 by mkaraden          #+#    #+#              #
#    Updated: 2023/11/29 22:58:59 by mkaraden         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= logger
LOG		= output.log
SRCS	= Account.cpp tests.cpp
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf



.PHONY: all clean re

all: $(NAME)
	@./$(NAME) >>  $(LOG)
	@$(RM) $(NAME)

$(NAME): $(SRCS)
	@printf " 	- Compiling $(NAME)... \n"
	@ $(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@printf "    - Log file created.\n"

clean:
	@$(RM) $(NAME) $(LOG)
	@printf "    - Log file removed\n"

fclean:
	@$(RM) $(NAME) $(LOG)
	@printf "    - Log file removed.\n"

re: clean all