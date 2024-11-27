CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
	phonebook.cpp \
	contact.cpp
	
NAME = phoneBook
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	@echo full cleaning of $(NAME) ...
	@rm -f $(NAME)
	@sleep 0.5
	@echo $(NAME) cleaned

clean:
	@echo cleaning $(NAME) ...
	@rm -f $(OBJ)
	@sleep 0.5
	@echo $(NAME) cleaned.

re: fclean all