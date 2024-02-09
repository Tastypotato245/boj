# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyusulee <kyusulee@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/08 15:15:06 by kyusulee          #+#    #+#              #
#    Updated: 2024/02/09 20:40:44 by kyusulee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	algo

SRCS	=	main.cpp

CPP		=	c++
CPPFLAG	=	-std=c++11
RM		=	rm -f

all		:
	@$(CPP) $(CPPFLAG) $(SRCS) -o $(NAME)

fclean	:
	@$(RM) $(NAME)

test	:
	@$(MAKE) all
	@./$(NAME)
	@$(MAKE) fclean

re		:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean re test
