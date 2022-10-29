NAME = Polymorphism
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf 
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp
OBJC= $(SRC:.cpp=.o)
$(NAME) : $(OBJC) Animal.hpp Dog.hpp Cat.hpp
	@$(CC) $(CFLAGS) $(OBJC) -o $(NAME)
	 @echo "successfully compile" $(SRC) 

all : $(NAME)	
%.o:%.cpp Animal.hpp Dog.hpp Cat.hpp
	@$(CC) $(CFLAGS) -c $< -o $@
clean :
	@$(RM) $(OBJC)
	@echo "successfully removed " $(OBJC) 
fclean: clean
	@$(RM) $(NAME)
	@echo "successfully removed " $(NAME)
re : fclean all
.PHONY: clean fclean all re