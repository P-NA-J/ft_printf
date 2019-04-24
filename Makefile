NAME := libftprintf.a
NAME_1 := ft_printf
NAME_2 := printf
SRC := src/common_tool.c \
		src/ft_itoa_base_unsigned.c \
		src/ft_itoa_base.c \
		src/ft_printf.c \
		src/integer_conversion.c \
		src/parsing.c \
		src/unsigned_conversion.c \
		src/flag_hub.c \
		src/convert_parse.c
SRC_FT :=	Test/main_ourprintf.c \
			Test/d_tests.c \
			Test/i_tests.c \
			Test/o_tests.c \
			Test/u_tests.c \
			Test/x_tests.c \
			Test/bigx_tests.c
SRC_TRUE := Test/main_trueprintf.c \
			Test/true_d_tests.c \
			Test/true_i_tests.c \
			Test/true_o_tests.c \
			Test/true_u_tests.c \
			Test/true_x_tests.c \
			Test/true_bigx_tests.c
OBJ := $(SRC:.c=.o)
OBJ_FT := $(SRC_FT:.c=.o)
OBJ_TRUE := $(SRC_TRUE:.c=.o)
FLAGS := -Wall -Wextra -Werror
LIB := libft/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $(OBJ)
	ranlib $@

$(NAME_1): $(OBJ_FT)
	gcc $(FLAGS) -o binary/$@ $(OBJ_FT) $(NAME) $(LIB)

$(NAME_2): $(OBJ_TRUE)
	gcc $(FLAGS) -o binary/$@ $(OBJ_TRUE) $(NAME) $(LIB)

diff_f:
	./binary/ft_printf > File/test_ft_printf
	./binary/printf > File/test_true_printf
	diff File/test_ft_printf File/test_true_printf > File/diff

%.o: %.c
	gcc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBF_FT) $(OBJ_TRUE) $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

