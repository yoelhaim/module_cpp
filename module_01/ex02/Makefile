NAME = violence
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
SRC =  main.cpp  
CC = c++
OBJ = $(SRC:.cpp=.o)
$(NAME): $(OBJ)
	 @$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
all: $(NAME)
%.o:%.cpp  main.cpp  
	@$(CC) $(CFLAGS) -c $< -o $@
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
