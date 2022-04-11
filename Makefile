SERFUNC= server.c ft_putnbr.c

CLIFUNC= client.c ft_atoi.c ft_calloc.c ft_strlen.c str_bin.c

CC=cc

CFLAGS= -Wall -Werror -Wextra -c

NAME= minitalk

minitalk= server client

O_SER= $(SERFUNC:.c=.o)

O_CLI= $(CLIFUNC:.c=.o)

server: $(O_SER)
	$(CFLAGS) $(O_SER)

client: $(O_CLI)
	$(CFLAGS) $(O_CLI)

all: $(NAME)

$(NAME): $(O_SER) $(O_CLI)

clean:
	rm -rf $(O_SER) $(O_CLI)

fclean:
	rm -rf $(server) $(client)

re: fclean all

.PHONY: re all fclean clean
