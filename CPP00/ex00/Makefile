SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

all : $(NAME)

$(NAME) : $(OBJ)
	g++ $(OBJ) $(CFLAGS) -o $(NAME)

clean :
	@echo cleaning $(NAME) ...
	$(RM) $(OBJ)
	@sleep 0.5
	@echo $(NAME) cleaned.

fclean : clean
	@echo full cleaning of $(NAME) ...
	@$(RM) -f $(NAME)
	@sleep 0.5
	@echo $(NAME) cleaned.

re : fclean all