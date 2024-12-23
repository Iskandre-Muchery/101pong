##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	vector.c	\
		cos.c		\
		sin.c		\
		tan.c		\
		main.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	101pong

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(OBJ) -o $(NAME)

clean:	all
	rm -f $(OBJ)

fclean:	clean
	rm -f	$(NAME)

re:	fclean all