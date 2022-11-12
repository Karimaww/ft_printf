CC			= gcc

NAME		= libftprintf.a

CFLAGS		= -Wall -Wextra -Werror

LIBFT		= libft

INCLUDE		= include

SRC_DIR		= src

OBJ_DIR		= obj

RM			= rm -f

SOURCES =	ft_check_params.c\
			ft_decimal.c		\
			ft_printf.c			\
			ft_ptr.c			\
			ft_string.c			\
			ft_hexa.c			\
			ft_convert_base.c	\
			ft_convert_base2.c	\


SRC	=	$(addprefix $(SRC_DIR)/,$(SOURCES))
#$(info $$SRC is [${SRC}])
OBJS =	$(addprefix $(OBJ_DIR)/,$(SOURCES:.c=.o))
#$(info $$OBJS is [${OBJS}])

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDE)/libftprintf.h
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I $(INCLUDE) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@rm -rf $(OBJ_DIR)
	@make clean -C $(LIBFT)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT)

re: fclean

.PHONY: all clean fclean re