# SRCS = ft_read.s  ft_strcmp.s  ft_strcpy.s  ft_strdup.s  ft_strlen.s  ft_write.s
SRCS = ft_strlen.s ft_write.s ft_read.s ft_strcmp.s ft_strcpy.s
NASM = nasm -f elf64
OBJ = $(SRCS:.s=.o)
NAME = libasm.a

%.o: %.s
	$(NASM) $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $@ $(OBJ)
	@ranlib $@

clean:
	rm -f *.o

fclean: clean
	rm -f libasm.a

re: fclean all