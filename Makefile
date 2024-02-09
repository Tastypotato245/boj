# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyusulee <kyusulee@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/08 15:15:06 by kyusulee          #+#    #+#              #
#    Updated: 2024/02/09 18:16:42 by kyusulee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	algo

SRCS	=	main.cpp

CPP		=	c++
RM		=	rm -f

all		:
	@$(CPP) $(SRCS) -o $(NAME)

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
