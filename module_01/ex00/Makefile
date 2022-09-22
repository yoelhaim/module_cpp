NAME = Zombie
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
CC = c++
OBJ = $(SRC:.cpp=.o)
$(NAME): $(OBJ)
	 @$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
all: $(NAME)
%.o:%.cpp Zombie.cpp  main.cpp newZombie.cpp randomChump.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
