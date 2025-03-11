# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/11 11:36:15 by ilevy             #+#    #+#              #
#    Updated: 2025/03/11 13:44:13 by ilevy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Program Name:
NAME:= Animals

#CPP Compiler and flags
CPP:= c++
CPPFLAGS:= -Wall -Wextra -Werror -std=c++98 -Wshadow

#Files and Dir
O_DIR:= o_files/
CPP_FILES:= main.cpp Cat.cpp Dog.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp
O_FILES:= $(addprefix $(O_DIR), $(CPP_FILES:.cpp=.o))

#To make my makefile faaaaabulouuuuuuus:
GREEN := \033[32m
YELLOW := \033[33m
RED := \033[31m
CYAN := \033[36m
MAGENTA:= \033[35m
BLUE := \033[34m
RESET := \033[0m

#Rules:

all:	$(NAME)

$(NAME):	$(O_FILES)
	$(CPP) $(CPPFLAGS) $(O_FILES) -o $(NAME)
	@echo "$(GREEN)Compiled $(NAME)"

$(O_DIR)%.o:	%.cpp | $(O_DIR)
	$(CPP) $(CPPFLAGS) -c $< -o $@
	@echo "$(CYAN)Compiled $@ files!$(RESET)"

$(O_DIR):
	mkdir -p $(O_DIR)
	@echo "$(MAGENTA)Created the $(O_DIR) directory!$(RESET)"

fclean:	clean
	rm -rf $(NAME)
	@echo "$(BLUE)Cleaned up $(NAME) with fclean!$(RESET)"

clean:
	rm -rf $(O_DIR)
	@echo "$(YELLOW)Cleaned up the $(O_DIR) with clean!$(RESET)"

re:	fclean all

.PHONY:	re fclean clean all