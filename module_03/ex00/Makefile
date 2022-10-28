NAME = ClapTrap
HAEDER = ClapTrap.hpp
CFLAGS= -Wall -Wextra -Werror
CC = g++
RM = rm -rf
SRC = main.cpp ClapTrap.cpp
OBJC = $(SRC:.cpp=.o)

%.o : %.c $(HAEDER) $(OBJC)
	$(CC) $(CFLAGS) $(OBJC) -c $< -o $@

NAME : $(HAEDER) $(OBJC)
	$(CC) $(CFLAGS) $(OBJC) -o $(NAME)
all: $(NAME)

clean:
	$(RM) $(OBJC)
fclean : clean
	$(RM) $(NAME)
