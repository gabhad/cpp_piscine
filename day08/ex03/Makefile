NAME =			mindopen

SRC_FILES =		main.cpp \
				createInstructions.cpp \
				executeInstructions.cpp \
				InstDecrement.cpp \
				InstIncrement.cpp \
				InstInput.cpp \
				InstJumpLeft.cpp \
				InstJumpRight.cpp \
				InstMoveLeft.cpp \
				InstMoveRight.cpp \
				InstOutput.cpp \
				Mindopen.cpp \
				readFromFile.cpp
	
SRCS_PATH =		srcs/
SRCS = 			$(addprefix $(SRCS_PATH), $(SRC_FILES))

CC =			clang++
CFLAGS =		-Wall -Wextra -Werror

OBJ_PATH =		objects/
OBJ_NAME =		$(patsubst %.cpp, $(OBJ_PATH)%.o, $(SRC_FILES))

INCLUDES_PATH = includes/

all: $(NAME)

$(NAME): $(OBJ_PATH)$(OBJ_NAME) 
		$(CC) $(OBJ_PATH)*.o -o $(NAME)

$(OBJ_PATH):
		@mkdir $(OBJ_PATH) 2> /dev/null || true 


$(OBJ_PATH)%.o: $(SRCS_PATH)%.cpp
	$(CC) $(FLAGS) -c $< -o $@ -I$(INCLUDES_PATH) 

clean:
		rm -fr $(OBJ_NAME)
		@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
		rm -fr $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
