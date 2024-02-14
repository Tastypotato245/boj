# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyusulee <kyusulee@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/08 15:15:06 by kyusulee          #+#    #+#              #
#    Updated: 2024/02/13 17:35:48 by kyusulee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	algo

SRCS	=	main.cpp

CPP		=	c++
CPPFLAG	=	-std=c++11
RM		=	rm -f
CLEAR	=	clear

all		:
	@$(CPP) $(CPPFLAG) $(SRCS) -o $(NAME)

fclean	:
	@$(RM) $(NAME)

test	:
	@$(MAKE) all
	@$(CLEAR)
	@./$(NAME)
	@$(MAKE) fclean

re		:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all fclean re test
