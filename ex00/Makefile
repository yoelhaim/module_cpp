NAME = megaphone
RM = rm -rf
SRC = megaphone.cpp
OBJ = $(SRC:.c=.o)
$(NAME): $(OBJ)
	c++ $(OBJ) -o $(NAME)
all: $(NAME)
# clean :
# 	$(RM) $(OBJ)
fclean : 
	$(RM) $(NAME)
re : fclean all
