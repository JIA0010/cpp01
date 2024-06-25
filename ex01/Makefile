NAME = a.out
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors
SRCS = main.cpp Zombie.cpp zombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) Makefile
	c++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

format:
	$(if $(SRCS), clang-format --style=Google -i $(SRCS))

.PHONY: all clean fclean re