CC = gcc

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

NAME = megaphone

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	g++ $(CFLAGS) $(OBJ) -o $(NAME)

fclean : clean
		@echo full cleaning of $(NAME) ...
		@$(RM) -f $(NAME)
		@sleep 0.5
		@echo $(NAME) cleaned

clean :
		@echo cleaning $(NAME) ...
		@$(RM) -f $(OBJ)
		@sleep 0.5
		@echo $(NAME) cleaned.

re : fclean all