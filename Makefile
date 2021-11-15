##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC     =       my_printf.c \
		my_putstr.c \
		my_putchar.c	\
		intchar.c	\
		my_putnbr.c	\
		my_revstr.c	\
		my_strcpy.c	\
		src/fct_b.c	\
		src/fct_c.c	\
		src/fct_d.c	\
		src/fct_o.c	\
		src/fct_s.c	\
		src/fct_xb.c	\
		src/fct_x.c	\
		src/fct_u.c	\
		src/fct_pr.c	\
		src/fct_p.c	\
		my_putnbruns.c

OBJ     =       $(SRC:.c=.o)

CC	=	gcc

CPPFLAGS=	$(INCLUDE)

INCLUDE	=	-I./include

NAME    =       libmy.a

SRC_TEST_C=	test.c

NAME_TEST=	test

all:    $(NAME)

$(NAME):        $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *.gc
	rm -f *.o

re:     fclean all

test_c  :
	make re
	gcc my_printf.c $(SRC_TEST_C) -o $(NAME_TEST) -I./include -L./ -lmy -lcriterion

.PHONY: clean fclean re all
