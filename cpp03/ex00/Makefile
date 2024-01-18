NAME = ClapTrap
CC = c++
FLAGS = -Wall -Wextra -Werror
SOURCE =  ClapTrap.cpp main.cpp
OBJS = $(SOURCE:.cpp=.o)

all: $(NAME)

%.o: %.cpp ClapTrap.hpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(FLAGS)  $(OBJS) -o $(NAME) 

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
