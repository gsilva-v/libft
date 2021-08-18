LIB= ./lib
SRC= ./src
INCLUDE= ./include



all:
	clang $(SRC)/ft_memset.c -I $(INCLUDE)/libtf.h -o ./obj/ft_memset.o
	clang ./src/ft_bzero.c -I ./include -o ./obj/ft_bzero.o
	ar -rcs ./include/libft.a ./obj/ft_bzero.o
