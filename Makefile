##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

SRC	=	$(SRC_DIR)main.c	\
		$(SRC_DIR)manual.c	\
		$(SRC_DIR)error.c	\
		$(SRC_DIR)error_stars_num.c	\
		$(SRC_DIR)fill_tab_num_den.c	\
		$(SRC_DIR)transfer.c	\
		$(SRC_DIR)compute.c	\

SRC_DIR	=	src/

OBJ	=	$(SRC:.c=.o)

NAME 	=	107transfer

CFLAGS	=	-Wall -Wextra

all: $(NAME)

$(NAME):	$(OBJ)
	@ make -C lib/my
	@ echo "[INFO]: lib compiled !"
	@ gcc -o $(NAME) $(OBJ) -Llib/my -lmy -lm -Iinclude
	@ echo "[OK]: Compiled succesfully !"

%.o:	%.c
	@ echo "[INFO]: Compiling" $<
	@ gcc -o $@ -c $< -Llib/my -lmy -lm -Iinclude

clean:
	@ rm -f $(OBJ)
	@ echo "[INFO]: Removed compiled files"
	@ rm -f *~ *#
	@ echo "[INFO]: Removed useless files"

fclean:	clean
	@ rm -f $(NAME)
	@ echo "[INFO]: Removed binary ->" $(NAME)
	@ make fclean -C lib/my
	@ echo "[INFO]: removed lib"

re: fclean all

.PHONY: all re clean fclean
