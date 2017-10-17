# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 16:09:33 by kboucaud          #+#    #+#              #
#    Updated: 2016/11/21 17:41:37 by kboucaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c
all : $(NAME)

$(NAME) : 
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) *.o
clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -rf $(NAME)

re : fclean all
