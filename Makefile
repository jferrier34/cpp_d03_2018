##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	file_a.c	\
		file_b.c	\
		file_c.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libstring.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
