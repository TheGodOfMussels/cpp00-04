# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/09 14:23:05 by dimolin2          #+#    #+#              #
#    Updated: 2023/11/08 16:15:00 by dimolin2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

SRCS		=	megaphone.cpp

CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

OBJS		=	$(SRCS:.cpp=.o)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME)	: $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $(NAME)
	@echo '$(NAME) compiled!'

fclean		: clean
	@$(RM) $(NAME)

clean		:
	@$(RM) $(OBJS)

re			:	fclean all

.PHONY		:	all clean fclean re