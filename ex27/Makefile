NAME=ft_display_file
SRC=utils.c utils.h ft_display_file.c
OBJ=$(SRC:.c=.o)
all:
	gcc -Wall -Werror -Wextra -c $(SRC)
	gcc  $(OBJ)
	@/bin/mv a.out $(NAME)
clean:
	@/bin/rm -f *.o utils.h.gch
fclean:clean
	@/bin/rm -f $(NAME)