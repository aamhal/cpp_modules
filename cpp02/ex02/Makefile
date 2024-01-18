NAME = a.out
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE = main.cpp Fixed.cpp 
OBJS = $(SOURCE:.cpp=.o)

all: $(NAME)

%.o: %.cpp Fixed.hpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) 
	@$(CC) $(FLAGS)  -o $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
