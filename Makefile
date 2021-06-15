##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile mydb
##

CFLAGS = -g3 -W -Wall -Wextra -I./include

SRC =	src/main.c \
		src/csv_handler/csv_parser.c \
      	src/handle_input/check_input.c \
      	src/commands/command_parser.c

OBJ = $(SRC:.c=.o)

NAME = mydb

all:  $(NAME) clean

$(NAME): $(OBJ)
	cd src/lib/my/ && make
	cd ../../
	gcc -o $(NAME) $(OBJ) -L./src/lib -lmy

clean:
	cd src/lib/my && make clean
	cd ../../
	rm -f $(OBJ)

fclean: clean
	cd src/lib/my && make fclean
	cd ../../
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re