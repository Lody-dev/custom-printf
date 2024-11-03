NAME = staticlib.a

CC = cc
CFLAGS = -g -Wall -Wextra -Werror

SRC = ft_putstr.c\
      ft_putnbr.c\
      ft_printf.c\
      main.c\


OBJ = $(SRC:.c=.o)
EXE = program

all: $(NAME) $(EXE) beauty



$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	

$(OBJ): $(SRC)
	$(CC) -c $(CFLAGS) $(SRC)

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $(EXE)

clean:
	@rm -f $(OBJ) $(NAME) $(EXE)
beauty: 
	@rm -f $(OBJ) $(NAME)

re: clean all

.PHONY: all clean fclean re bonus
