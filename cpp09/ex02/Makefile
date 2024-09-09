NAME = PmergeMe
CC = c++ 
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE = main.cpp PmergeMe.cpp
OBJS = $(SOURCE:.cpp=.o)

all: $(NAME)

%.o: %.cpp PmergeMe.hpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) 
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re