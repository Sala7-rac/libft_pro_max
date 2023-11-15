# Main library
NAME = libft.a

SRCS =  ft_isalnum.c ft_atoi.c ft_isalpha.c ft_isprint.c\
		ft_isascii.c ft_isdigit.c ft_putstr_fd.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_strdup.c\
		ft_strmapi.c ft_putchar_fd.c\
		ft_tolower.c ft_toupper.c ft_memcpy.c ft_memmove.c\
		ft_strjoin.c ft_striteri.c ft_putnbr_fd.c\
		ft_strlcpy.c ft_strlcat.c ft_strchr.c\
		ft_strrchr.c ft_strtrim.c ft_split.c ft_putendl_fd.c\
		ft_calloc.c ft_strncmp.c ft_itoa.c\
		ft_memchr.c  ft_memcmp.c ft_strnstr.c ft_substr.c\


LIBC = ar -rcs
OBJS = ${SRCS:.c=.o}
CC = cc
HEADERS = libft.h
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

%.o : %.c ${HEADERS}
	@${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJS}
	@${LIBC} ${NAME} ${OBJS}


# Bonus library
BNAME = bonus.a

BSRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
        ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c \
        ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstadd_back_bonus.c\

BOBJS = ${BSRCS:.c=.o}

bonus: ${BOBJS}
	@${LIBC} ${BNAME} ${BOBJS}

all: ${NAME}

# Clean all object files
clean:
	@$(RM) ${OBJS} ${BOBJS}

fclean: clean
	@$(RM) ${NAME} ${BNAME}

re: fclean all

.PHONY: all clean fclean re
