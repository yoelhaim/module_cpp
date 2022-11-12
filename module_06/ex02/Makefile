NAME = identify
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -rf
SRC = main.cpp identify.cpp
OBJS = $(SRC:.cpp=.o)

$(NAME): $(OBJS) identify.hpp
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
%.o : %.cpp identify.hpp
	$(CC) $(CFLAGS) -c $< -o $@
all: $(NAME)

clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.PHONY: clean fclean re