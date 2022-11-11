NAME = convert
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -rf
SRC = main.cpp
OBJS = $(SRC:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
%.o : %.cpp 
	$(CC) $(CFLAGS) -c $< -o $@
all: $(NAME)

clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.PHONY: clean fclean re