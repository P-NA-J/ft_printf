NAME = libftprintf.a

CFLAG = -Wall -Werror -Wextra

SRC =	buffer.c \
		ft_error_parse.c \
		ft_parser.c \
		ft_printf.c \
		ft_option.c \
		ft_option.c \
		ft_size.c \
		ft_lmc_precision.c \
		ft_argument.c \
		convert_to_base.c \
		ft_power.c \
		ft_formatting.c \
		ft_d_conversion.c \
		ft_o_conversion.c \
		ft_u_conversion.c \
		ft_x_conversion.c \
		ft_bigx_conversion.c \
		ft_p_conversion.c \
		ft_c_conversion.c \
		ft_s_conversion.c \
		ft_percent_conversion.c \

OBJ = $(SRC:.c=.o)
LIBFT = ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_itoa.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lst_push_back.c \
		ft_strjoinf.c\
		ft_higher_value.c \
		ft_nb_digit.c \

LIBFT_OBJ = $(LIBFT:.c=.o)
PATH_SRC = $(addprefix src/, $(SRC))
PATH_OBJ = $(addprefix obj/, $(OBJ))
PATH_LIBFT_SRC = $(addprefix libft/src/, $(LIBFT))
PATH_LIBFT_OBJ = $(addprefix libft/obj/, $(LIBFT_OBJ))

all: libft $(NAME)

libft:
	@make -C libft

$(NAME): obj $(PATH_OBJ)
	@ar rc $@ $(PATH_OBJ) $(PATH_LIBFT_OBJ)
	@ranlib $@

obj :
	mkdir obj
	mkdir libft/obj

$(addprefix obj/, %.o): $(addprefix src/, %.c)
	@gcc $(CFLAG) -c $< -o $@

clean:
	@make clean -C libft
	@rm -f $(PATH_OBJ)

fclean: clean
	@make fclean -C libft
	@rm -f $(NAME)

re: fclean all

.PHONY : libft clean fclean re
