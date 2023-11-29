# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 19:33:17 by mkaraden          #+#    #+#              #
#    Updated: 2023/11/29 22:03:42 by mkaraden         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= phonebook
SRCS	= PhoneBook.cpp Contact.cpp main.cpp
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf


.PHONY: all clean re

all: $(NAME)

test:
	@printf "	- Compiling $(NAME)... \n"
	@ $(CC)  $(SRCS) -o $(NAME)
	@printf "    - Executable ready.\n"

$(NAME): $(SRCS)
	@printf " 	- Compiling $(NAME)... \n"
	@ $(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@printf "    - Executable ready.\n"

clean:
	@$(RM) $(NAME)
	@printf "    - Executable removed.\n"

fclean:
	@$(RM) $(NAME)
	@printf "    - Executable removed.\n"

re: clean all