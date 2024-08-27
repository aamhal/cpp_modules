NAME = btc
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE = main.cpp BitcoinExchange.cpp
OBJS = $(SOURCE:.cpp=.o)

all: $(NAME)

%.o: %.cpp BitcoinExchange.hpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) 
	@$(CC) $(OBJS) -o $(NAME) 

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re