NAME = Harl
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp Harl.cpp
OBJ = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all