NAME = ClapTrap
CC = c++
HAEDER = ClapTrap.hpp ScavTrap.hpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf 
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJC= $(SRC:.cpp=.o)
$(NAME) : $(OBJC) ClapTrap.hpp
	$(CC) $(CFLAGS) $(OBJC) -o $(NAME)
all : $(NAME)	
%.o:%.cpp ClapTrap.hpp
	@$(CC) $(CFLAGS) -c $< -o $@
clean :
	$(RM) $(OBJC)
fclean: clean
	$(RM) $(NAME)
re : fclean all
.PHONY: clean fclean re
