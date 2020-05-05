NAME =			array

CC =			clang++
CFLAGS =		-Wall -Wextra -Werror

SRC_NAME =		main.cpp

OBJ_NAME =		$(SRC_NAME:.cpp=.o)

all: $(NAME)

$(NAME): obj
		$(CC) $(CFLAGS) -o $@ $(OBJ_NAME)

obj:
		$(CC) $(CFLAGS) -c $(SRC_NAME)

clean:
		rm -rf $(OBJ_NAME)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
