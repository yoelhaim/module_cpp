NAME = ClapTrap
HAEDER = ClapTrap.hpp ScavTrap.hpp  FragTrap.hpp
CFLAGS= -Wall -Wextra -Werror
CC = c++
RM = rm -rf
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJC = $(SRC:.cpp=.o)

%.o : %.c $(OBJC)
	$(CC) $(CFLAGS) $(OBJC) -c $< -o $@ -g

NAME : $(HAEDER) $(OBJC)
	$(CC) $(CFLAGS) $(OBJC) -o $(NAME) -g
all: $(NAME)

clean:
	$(RM) $(OBJC)
fclean : clean
	$(RM) $(NAME)
re : fclean all
