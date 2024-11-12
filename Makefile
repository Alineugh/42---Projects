NAME	= libftprintf.a
CC	= cc
CFLAGS	+= -Wall -Wextra -Werror
AR	= ar rcs
RM	= rm -f

SRCS = ft_printf.c convert_c.c convert_s.c convert_d.c convert_pourcentage.c printf_utils.c convert_i.c convert_u.c convert_x.c convert_X.c convert_p.c

OBJS = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C libft
	cp libft/libft.a .
	mv libft.a $@
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)
	$(MAKE) clean -C libft
	$(RM) $(OBJS)

fclean:    clean
	$(RM) $(NAME)
	$(MAKE) fclean -C libft

re:	fclean all