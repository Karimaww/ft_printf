CC			= gcc

NAME		= libftprintf.a

CFLAGS		= -Wall -Wextra -Werror

LIBFT		= libft

INCLUDE		= include

SRC_DIR		= src/

OBJ_DIR		= obj/

RM			= rm -f

SOURCES		=	ft_check_params.c	\
				ft_chr.c			\
				ft_decimal.c		\
				ft_printf.c			\
				ft_ptr.c			\
				ft_string.c			\

SRC			= $(addprefix $(SRC_DIR),$(SOURCES))
#$(info $$SRC is [${SRC}])
OBJS		= $(addprefix $(OBJ_DIR),$(SOURCES:.c=.o))
#$(info $$OBJS is [${OBJS}])

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDE)/ft_libftprintf.h
	@mkdir -p obj
	@$(CC) $(CFLAGS) -I $(INCLUDE) -o $@ -c $<

test:
	@make all misc/main.c

norme:
	norminette ./libft/
	@echo
	norminette ./$(INCLUDE)/
	@echo
	norminette ./$(SRC_DIR)/
	 
clean:
	@rm -f $(OBJS)
	@rm -rf $(OBJ_DIR)
	@make clean -C $(LIBFT)

fclean:		clean
	@$(RM) $(NAME)
	@make fclean -C $(LIBFT)

re:			fclean all

.PHONY:		fclean re norme all clean