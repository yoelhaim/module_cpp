NAME = Polymorphism
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf 
HEADER = Animal.hpp \
		Dog.hpp \
		Cat.hpp \
		WrongAnimal.hpp \
		WrongCat.hpp \
		Brain.hpp
SRC = main.cpp \
	 Animal.cpp \
	 Dog.cpp \
	 Cat.cpp \
	 WrongAnimal.cpp \
	 WrongCat.cpp \
	 Brain.cpp
OBJC= $(SRC:.cpp=.o)

$(NAME) : $(OBJC) $(HEADER)
	@$(CC) $(CFLAGS) $(OBJC) -o $(NAME)
	 @echo "successfully compile" $(SRC) 

all : $(NAME)	
%.o:%.cpp $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@
clean :
	@$(RM) $(OBJC)
	@echo "successfully removed " $(OBJC) 
fclean: clean
	@$(RM) $(NAME)
	@echo "successfully removed " $(NAME)
re : fclean all
.PHONY: clean fclean  re