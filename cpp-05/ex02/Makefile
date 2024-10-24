# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/30 08:52:23 by gforns-s          #+#    #+#              #
#    Updated: 2024/10/24 08:56:07 by gforns-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = No,_you_need_form_28B,not_28C...

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

SRC_P = src/

FLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -pedantic -pedantic-errors -g -fsanitize=address

TMP = tmp/

INC = Include/

SRC_PREFIX = $(addprefix $(SRC_P),$(SRC))

OBJ = $(addprefix $(TMP), $(SRC_PREFIX:.cpp=.o))

DEP = $(OBJ:.o=.d)

#############################################################################

# Regular Colors
BLACK := \033[0;30m
RED := \033[0;31m
GREEN := \033[0;32m
YELLOW := \033[0;33m
BLUE := \033[0;34m
MAGENTA := \033[0;35m
CYAN := \033[0;36m
WHITE := \033[0;37m

# Reset
RESET := \033[0m

#############################################################################

all: tmp $(NAME)

tmp:
	@mkdir -p $(TMP)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -I $(INC) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled$(RESET)"

$(TMP)%.o: %.cpp Makefile
	@mkdir -p $(dir $@)
	c++ $(FLAGS) -c $< -I $(INC) -o $@

-include $(DEP)

re: fclean all

clean:
	@rm -rf $(TMP)
	@echo "$(CYAN)$(NAME) $(YELLOW)- $(RED)Obj deleted$(RESET)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(CYAN)$(NAME) $(RED)deleted$(RESET)"

.PHONY: all re clean fclean
