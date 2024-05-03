
NAME = push_swap

INCLUDE = -I include

CC = cc

CFLAGS = -Wall -Werror -Wextra -g

LDFLAGS = -Llibft -lft

LIBFT = libft/libft.a

RM = rm -rf

SRC_DIR = src sort/

OBJ_DIR = obj/

SRCS = main.c \
       check.c \
       stack.c \
       utils.c \
       index.c \
       is_sorted.c \
       rotate.c \
       sort_three.c \
       swap.c


SRC_FILES = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC)))

OBJ_FILES = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC)))


all:	$(NAME)

$(NAME):	$(OBJ_FILES)
			make -C libft
			make bonus -C libft
			@echo "$(LIBFT) compiled"
			$(CC) $(CFLAGS) $(INCLUDE) $^ $(LDFLAGS) -o $@
			@echo "$(NAME) compiled"

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
				@mkdir -p $(OBJ_DIR)
				$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
				@echo "$< compiled"

clean:
		$(RM) $(OBJ_DIR)
		@echo "Object files removed"
		make clean -C libft
		@echo "Libft object files removed"

fclean:	clean
		$(RM) $(NAME)
		@echo "$(NAME) removed"
		$(RM) $(LIBFT)
		@echo "$(LIBFT) removed"

re:	fclean all

.PHONY:	all clean fclean re

ifndef VERBOSE
.SILENT:
endif