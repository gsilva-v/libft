NAME=libft.a
OBJ= ./obj
CFLAGS= -c -Wall -Werror -Wextra

SRCS =    ft_memset.c \
	ft_bzero.c\
	ft_isalpha.c\
	ft_atoi.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_strlen.c\
	ft_memmove.c\
	ft_memcpy.c

OBJS =    ${SRCS:.c=.o}

all: ${NAME}

${NAME}:    ${OBJS}
	ar rcs ${NAME} ${OBJS}

$(OBJS):    $(SRCS)
	gcc ${CFLAGS} $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean 
	rm -f $(NAME)

re: fclean all
