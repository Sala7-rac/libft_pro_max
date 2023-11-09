NAME = libft.a

SRC =  ft_isalnum.c ft_atoi.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_strdup.c\
		ft_tolower.c ft_toupper.c ft_memcpy.c ft_memmove.c ft_strjoin.c\
		ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strtrim.c\
		ft_calloc.c ft_strncmp.c ft_memchr.c  ft_memcmp.c ft_strnstr.c ft_substr.c\

LIBC = ar -rcs
OBJS = ${SRC:.c=.o}
CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -rf
so = libft.so

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I .

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

all: ${NAME}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)
re: fclean all