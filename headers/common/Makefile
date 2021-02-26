HEADER = .
NAME = common.a
SRC = 
OBJ = *.o

all : $(NAME)
$(NAME) :
	gcc $(FLAG) -c $(SRC) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
