NAME = Fixed
RM = rm -rf
HEADER = Fixed.hpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Fixed.cpp 
CC = c++
OBJ = $(SRC:.cpp=.o)
$(NAME): $(OBJ)
	 @$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -g
all: $(NAME)
%.o:%.cpp  $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@ -g
	@echo "successfully compile ... $<"
clean :
	@$(RM) $(OBJ)
	@echo "successfully removed ..."
fclean : clean
	@$(RM) $(NAME)
	@echo "successfully all removed ..."
re : fclean all
.PHONY: re clean fclean all