NAME = Animal
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE = main.cpp cat.cpp dog.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp AAnimal.cpp
OBJS = $(SOURCE:.cpp=.o)

all: $(NAME)

%.o: %.cpp cat.hpp dog.hpp Animal.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp AAnimal.hpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) 
	@$(CC) $(FLAGS)  -o $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

