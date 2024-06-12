NAME = SedIsForLosers
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors

SRCS = main.cpp SedIsForLosers.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re