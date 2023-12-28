# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 16:46:41 by dimolin2          #+#    #+#              #
#    Updated: 2023/11/08 16:46:42 by dimolin2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Zombie

SRC_DIR		=	./src/
OBJ_DIR		=	obj/

INCS_DIR	=	./includes
MAIN_INC	= -I $(INCS_DIR)
INCS		=	$(shell find $(INCS_DIR) -type f -name "*.hpp")

SRC		=	main.cpp \
			Zombie.cpp \
			ZombieHorde.cpp
				
OBJ		=	$(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

CC		=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp $(INCS)
		@mkdir -p $(OBJ_DIR)
		$(CC) ${CFLAGS}  $(MAIN_INC) -o $@ -c $<

$(NAME)		:	$(OBJ) $(INCS)
		$(CC) $(CFLAGS) $(OBJ) $(MAIN_INC) -o $(NAME)
					
all		:	$(NAME)

clean		:
		@rm -rf $(OBJ_DIR)

fclean		:	clean
		@rm -rf $(NAME)

re		:	fclean	all

.PHONY		:	all clean fclean re
