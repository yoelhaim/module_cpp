NAME = Zombie
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
SRC = Zombie.cpp main.cpp  
CC = c++
OBJ = $(SRC:.cpp=.o)
$(NAME): $(OBJ)
	 @$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -g
all: $(NAME)
%.o:%.cpp Zombie.cpp  main.cpp  
	@$(CC) $(CFLAGS) -c $< -o $@ -g
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
