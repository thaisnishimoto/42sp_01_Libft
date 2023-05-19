# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 10:48:14 by tmina-ni          #+#    #+#              #
#    Updated: 2023/05/19 15:59:32 by tmina-ni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#HEADER = ../
CC = cc
CFLAGS = -Wall -Wextra -Werror

#lrt: for timer
#lm: for linking function used in assert types
test_%: 
#	$(CC) $(CFLAGS) $@.c -L.. -lft -I$(HEADER) -lrt -lm -o program 
	$(CC) $(CFLAGS) $@.c -L.. -lft -lrt -lm -o program 
	./program
	rm -f program
	rm -f *.o

clean:
	rm -f *.o

fclean: clean
	rm -f program
