NAME = replace

FILES = main \

CCMAC = clang++
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

INCLUDE = include/

SRC = $(addsuffix .cpp, $(FILES))
OBJ = $(addsuffix .o, $(FILES))

FILE_REPLACE = file.replace

OBJF = .cache_exits

GREEN = \033[0;92m
YELLOW = \033[33m
BLUE = \033[34m
RESET = \033[0;39m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -g3 -o $(NAME)
	@echo -e "$(GREEN)replace compiled !!$(RESET)"

%.o: %.cpp
	@$(CC) $(FLAGS) -c -g3 $< -o $@

clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_DIR)
	@echo -e "$(YELLOW)Obj destroyed !!$(RESET)"

fclean: clean
	@rm -f $(FILE_REPLACE)
	@rm -f $(NAME)
	@echo -e "$(YELLOW)Executable destroyed !!$(RESET)"

re: fclean all

.PHONY: all clean fclean re