NAME = libft.a 
CC = gcc
CFLAGS = -wall -wextra -werror 
BUILD = 
SRC = 	
		isalpha.c isascii.c \
		isalnum.c isdigit.c isprint.c \
		tolower.c toupper.c \
		atoi.c bzero.c calloc.c \
		memchr.c memcmp.c memcpy.c \
		memmove.c memset.c \
		strchr.c strdup.c strlcat.c \
		strlcpy.c strncmp.c strnstr.c \
		strrchr.c strlen.c substr.c \
		strjoin.c strtrim.c split.c \
		itoa.c strmapi.c striteri.c \
		putchar_fd.c putstr_fd.c \
		putendl_fd.c putnbr_fd.c \
		lstnew.c lstadd_front.c lstsize.c \
		lstadd_back.c lstdelone.c lstclear.c \
		lstlast.c \
		lstiteri.c lstmap.c \

OBJ = $(addprefix $(BUILD), $(SRC:.c=.o)) #sintaxe básica -> $(addprefix <prefixo>, <lista_de_palavras>)

all: $(NAME)

$(NAME) : $(OBJ)
#No Makefile, o símbolo "@" é usado para suprimir a exibição do comando na saída do Make.				
	@mkdir -p $(BUILD) 
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(BUILD)
fclean: clean
	rm -f *.a
re: fclean all
.PHONY:	all clean fclean re
