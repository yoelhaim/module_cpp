NAME = PhoneBook
RM = rm -rf
SRC = main.cpp PhoneBook.cpp Contact.cpp
OBJ = $(SRC:.c=.o)
$(NAME): $(OBJ)
	c++ $(OBJ) -o $(NAME)
all: $(NAME)
# clean :
# 	$(RM) $(OBJ)
fclean : 
	$(RM) $(NAME)
re : fclean all
