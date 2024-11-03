NAME = staticlib.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
DEBUG_FLAGS = -g -Wall -Wextra -Werror 

SRC = 	ft_printf.c\
	ft_putstr.c\
	ft_putnbr.c\
	ft_putchar.c\
	main.c\


OBJ = $(SRC:.c=.o)

EXE = program

DEBUG_EXE = program_gdb

all: $(NAME) $(EXE) clean

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) -c $(CFLAGS) $(SRC)

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $(EXE)

gdb: $(OBJ)
	$(CC) $(OBJ) $(DEBUG_FLAGS) -o $(DEBUG_EXE)
	@$(MAKE) clean

clean:
	@rm -f $(OBJ) $(NAME) 

re: clean all

.PHONY: all clean fclean re bonus
