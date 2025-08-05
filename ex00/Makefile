CC = c++
CFLAGS = -Wall -Werror -Wextra -fsanitize=address -std=c++98
NAME = megaphone

all:$(NAME)

$(NAME): megaphone.cpp
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJS)

re: fclean all

.PHONY: all clean re fclean