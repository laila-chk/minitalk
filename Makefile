SERFUNC= server.c ft_putnbr.c

CLIFUNC= client.c ft_atoi.c ft_calloc.c ft_strlen.c str_bin.c

CC=cc

CFLAGS= -Wall -Werror -Wextra 

NAME= $(minitalk)

minitalk= server client

O_SER= $(SERFUNC:.c=.o)

O_CLI= $(CLIFUNC:.c=.o)

all: $(NAME)

$(NAME): $(O_SER) $(O_CLI)

server: $(O_SER)
	$(CC) $(CFLAGS) $(O_SER) -o server

client: $(O_CLI)
	$(CC) $(CFLAGS) $(O_CLI) -o client

clean:
	rm -rf $(O_SER) $(O_CLI)

fclean: clean
	rm -rf server client	

re: fclean all

.PHONY: re all fclean clean
