# ---------------------------- COLORS ---------------------------- #

GREEN_B = "\[\033[1;32m\]"
BLUE_B = "\[\033[1;34m\]"
YELLOW_B = "\[\033[1;33m\]"

RED_BG = "\[\033[41m\]"
BLUE_BG = "\[\033[44m\]"
GREEN_BG = "\[\033[42m\]"

# --------------------------- LIBRARY ---------------------------- #

NAME = libft.a

# -------------------------- MANDATORY --------------------------- #

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
	ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
	ft_substr.c ft_strlcpy.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_itoa.c \
	ft_strjoin.c ft_putchar_fd.c ft_striteri.c ft_strmapi.c ft_strtrim.c\
	ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_putstr_fd.c ft_striteri.c \

# ---------------------------- BONUS ----------------------------- #
#XXXX

# --------------------------- COMPILE ---------------------------- #

FLAGS = -Wall -Wextra -Werror
HEADER = libft.h

# ---------------------------- RULES ----------------------------- #

all: $(NAME)


# Compiles the .c files into .o files
# Includes the header file
%.o: %.c 
	cc -Wall -Wextra -Werror -c $< -o $@ -I ./include
	

# SRC:.c=.o means that for each file in SRC, replace .c with .o
# ar rcs checks if the .o files are up to date and if so, creates the library
$(NAME): $(SRC:.c=.o)
	ar rcs $(NAME) $^
	@echo $(GREEN_BG) Mandatory compiled $(GREEN_BG)


# --------------------------- ADDITIONAL ------------------------- #

norm:
	@echo $(BLUE_B) Checking norminette $(RESET)
	norminette *$(SRC) $(HEADER)
	@echo $(BLUE_BG) Norminette OK $(BLUE_BG)

clean:
	rm -f $(SRC:.c=.o)
	@echo $(YELLOW_B) Cleaned $(YELLOW_B)

fclean: clean
	rm -rf $(NAME)
	@echo $(YELLOW_B) Fcleaned $(YELLOW_B)

re: fclean all