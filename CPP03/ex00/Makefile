CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
      ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

NAME = ClapTrap

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning object files..."
	@$(RM) $(OBJ)
	@echo "Object files cleaned."

fclean: clean
	@echo "Cleaning executable..."
	@$(RM) $(NAME)
	@echo "Executable cleaned."

re: fclean all

.PHONY: all clean fclean re