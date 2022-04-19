##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Description Makefile
##

NAME    =       bsq

SRC     =       src/main.c \
				src/error.c \
				src/manage_tab.c \
				src/algo.c \
				src/replace.c \
				src/display.c

OBJ	=	$(SRC:.c=.o)

all:	$(NAME) clean


$(NAME):	$(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) -I./include -L./lib/ -lmy

tests_run:
	echo 'oui'

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re tests_run
