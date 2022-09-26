NAME = Sed
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp
CC = c++
OBJ = $(SRC:.cpp=.o)
$(NAME): $(OBJ)
	 @$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -g
all: $(NAME)
%.o:%.cpp main.cpp
	@$(CC) $(CFLAGS) -c $< -o $@ -g
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
