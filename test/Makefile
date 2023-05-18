NAME = libft.a
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
