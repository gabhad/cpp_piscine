NAME =			mindopen

SRC_FILES =		main.cpp

CC =			clang++
CFLAGS =		-Wall -Wextra -Werror

OBJ_PATH =		objects/
OBJ_NAME =		$(patsubst %.cpp, $(OBJ_PATH)%.o, $(SRC_FILES))

all: $(NAME)

$(NAME): $(OBJ_PATH)$(OBJ_NAME) 
		$(CC) $(OBJ_PATH)*.o -o $(NAME)

$(OBJ_PATH):
		@mkdir $(OBJ_PATH) 2> /dev/null || true 

$(OBJ_PATH)%.o: 

$(OBJ_PATH)%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@ 

clean:
		rm -fr $(OBJ_NAME)
		@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
		rm -fr $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
