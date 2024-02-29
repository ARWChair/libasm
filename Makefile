SRC = ft_strlen.s ft_strdup.s ft_read.s ft_write.s ft_strcmp.s ft_strcpy.s

NASM = nasm -f elf64

OBJ = $(SRC:.s=.o)

NAME = libasm.a

%.o: %.s
	$(NASM) $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@ar	-rcs	$@	$(OBJ)
	@ranlib	$@

clean:
	rm -f *.o

fclean: clean
	rm -f libasm.a

re: fclean all

