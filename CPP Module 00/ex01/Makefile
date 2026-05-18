NAME = phonebook

SRC = main.cpp PhoneBook/PhoneBook.cpp Contact/Contact.cpp
OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Werror -Wextra --std=c++98
COMPILER = c++

.cpp.o:
	$(COMPILER) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(COMPILER) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re