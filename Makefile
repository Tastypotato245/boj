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
CP		=	cp tmp/main.cpp .
MKDIR	=	mkdir $(D)
MV		=	mv main.cpp $(D)

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

new		:
			@$(CP)
			@$(MKDIR)

go		:
			@$(MV)

.PHONY: all fclean re test new go
