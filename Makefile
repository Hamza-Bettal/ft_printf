NAME = libftprintf.a
CC = cc
RM = rm -f
AR = ar rc
FLAGS = -Wall -Wextra -Werror

SBJ =	ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunbr.c \
		ft_puthexa.c ft_putaddress.c

SRC_OBJ = $(SBJ:.c=.o)

all: $(NAME)

$(NAME):	$(SRC_OBJ)
	$(AR) $(NAME) $(SRC_OBJ)

clean:
	$(RM) $(SRC_OBJ)

fclean: clean
	$(RM) $(NAME)

%.o: %.c ft_printf.h
	$(CC) $(FLAGS) -c $<

re: fclean all

.PHONY: clean