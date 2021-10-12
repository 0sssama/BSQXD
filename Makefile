CC=gcc
FLAGS=-Wall -Wextra -Werror
INCLUDES=includes
SRCS=$(wildcard src/*.c)
OBJS=$(SRCS:.c=.o)
BIN=bsq

.PHONY: all clean fclean

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) -I $(INCLUDES) $(FLAGS) $(OBJS) main.c -o $(BIN)

%.o: %.c 
	$(CC) -I $(INCLUDES) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(BIN)

