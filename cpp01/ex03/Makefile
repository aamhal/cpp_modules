NAME = Unnecessary_violence
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE = main.cpp Weapon.cpp HumanA.cpp  HumanB.cpp 
OBJS = $(SOURCE:.cpp=.o)

all: $(NAME)

%.o: %.cpp HumanA.hpp HumanB.hpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) 
	@$(CC) $(FLAGS)  -o $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
