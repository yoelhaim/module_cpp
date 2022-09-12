NAME = PhoneBook
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp PhoneBook.cpp Contact.cpp
CC = c++
OBJ = $(SRC:.cpp=.o)
$(NAME): $(OBJ)
	 @$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
all: $(NAME)
%.o:%.cpp Contact.hpp PhoneBook.hpp main.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
# clean :
# 	$(RM) $(OBJ)
fclean : 
	$(RM) $(NAME)
re : fclean all
