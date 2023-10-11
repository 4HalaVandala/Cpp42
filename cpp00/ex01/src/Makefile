NAME	=	PhoneBook
SRC		=	main.cpp
CC		= 	c++
CFLAGS	=	-Wall -Wextra -Werror
STD		=	-std=c++11
FILES   =   phonebook.cpp validation.cpp contact.cpp main.cpp

all	:	$(NAME)

$(NAME):	$(SRC)
		$(CC) $(CFLAGS) $(STD) $(FILES) -o $@

clean:
		rm -rf $(NAME)

fclean: clean

re:	fclean clean all

.PHONY:	all fclean clean re