# Makefile for ZombieHorde project

CC = c++
FLAGS =    -Wall -Wextra -Werror -std=c++98 -pedantic-errors
SRCS = main.cpp Zombie.cpp zombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = zombiehorde

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
