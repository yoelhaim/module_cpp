NAME = Form		
HEADER = Bureaucrat.hpp Form.hpp \
		ShrubberyCreationForm.hpp \
		RobotomyRequestForm.hpp \
		PresidentialPardonForm.hpp \
		Intern.hpp

CC = c++
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp Bureaucrat.cpp Form.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		Intern.cpp
RM = rm -rf
OBJ = $(SRC:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all