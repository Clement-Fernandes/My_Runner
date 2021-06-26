##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## printf
##

SRC =	actions/destroy.c			\
		actions/draw.c				\
		actions/move.c				\
		actions/replace.c			\
		actions/scale_and_pos.c		\
		actions/texture.c			\
		file_game/analyse_events.c	\
		file_game/analyse_event.c	\
		file_game/clocks.c			\
		file_game/game.c			\
		file_game/move_rect.c		\
		file_game/end.c				\
		file_menu/analyse_menu.c	\
		file_menu/clock_menu.c		\
		file_menu/menu.c			\
		file_menu/move_char.c		\
		files/help.c				\
		files/main.c				\
		structs/parallax.c			\
		structs/window_and_player.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

CSFML	=	-lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window -g

all:	 $(NAME)

$(NAME):	$(OBJ)
	gcc -Wall -Wextra -o $(NAME) $(OBJ) $(CSFML)
	@tput setaf 5; cat include/signature; tput sgr0

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	clear

re:	fclean all

.PHONY :	all clean fclean re $(NAME)
