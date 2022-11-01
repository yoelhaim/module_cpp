NAME = a.out
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf 
SRC = main.cpp Fixed.cpp 
OBJC= $(SRC:.cpp=.o)
$(NAME) : $(OBJC) Fixed.hpp
	$(CC) $(CFLAGS) $(OBJC) -o $(NAME) 
all : $(NAME)	
%.o:%.cpp Fixed.hpp
	@$(CC) $(CFLAGS) -c $< -o $@ 
clean :
	$(RM) $(OBJC)
fclean: clean
	$(RM) $(NAME)
re : fclean all
.PHONY: clean fclean  re