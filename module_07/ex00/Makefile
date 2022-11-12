NAME = template
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = main.cpp
OBJ= $(SRC:.c=.o)

$(NAME): $(OBJ) whatever.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c whatever.hpp
	$(CC) $(CFLAGS) -c $< -o $@
all : $(NAME)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re : fclean all
.PHONY : clean fclean re