NAME = libft.a

SRCS =  ft_isalnum.c ft_atoi.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_putstr_fd.c ft_lstnew.c ft_lstadd_front.c\
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_strdup.c ft_strmapi.c ft_putchar_fd.c ft_lstsize.c ft_lstiter.c\
		ft_tolower.c ft_toupper.c ft_memcpy.c ft_memmove.c ft_strjoin.c ft_striteri.c ft_putnbr_fd.c ft_lstlast.c ft_lstmap.c\
		ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strtrim.c ft_split.c ft_putendl_fd.c ft_lstadd_back.c ft_lstmap.c\
		ft_calloc.c ft_strncmp.c ft_memchr.c  ft_memcmp.c ft_strnstr.c ft_substr.c ft_itoa.c ft_lstdelone.c ft_lstclear.c\

NAME = libft.a
LIBC = ar -rcs
OBJS = ${SRCS:.c=.o}
CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -rf
INCS = .
so = libft.so

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

all: ${NAME}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)
re: fclean all