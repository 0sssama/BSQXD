CC=gcc
FLAGS=-Wall -Wextra -Werror
INCLUDES=includes
SRCS=$(wildcard src/*.c)
OBJS=$(SRCS:.c=.o)
BIN=bsq

all: $(BIN)

$(BIN): $(OBJS)
    $(CC) -I $(INCLUDES) $(FLAGS) $(OBJS) -o $(BIN)
%.o: %.c 
    $(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(BIN)

.PHONY: all clean fclean
