NAME = push_swap

CC = cc

W = -Wall -Werror -Wextra

LIB = libft/libft.a

FLAG = -fsanitize=address

SRCS = srcs/parse.c srcs/main.c srcs/tools.c \


OBJS = $(SRCS:.c=.o)

HEADER = -I ./includes/

all	: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[33m----Compiling!----\033[0m"
	@make -C libft
	@${CC} ${W} ${FLAG} ${OBJS} ${LIB} -o ${NAME}

%.o : %.c ${HEADER}
	@${CC} ${W} -c $< -o $@
clean : 
	@echo "\033[31m----Cleaning objectes!----\033[0m"
	@make clean -C libft
	@${RM} ${OBJS}
	@echo "\033[32m----Clean!----\033[0m"

fclean : clean
	@echo "\033[31m----cleaning binaries!----\033[0m"
	@make fclean -C libft
	@${RM} ${NAME}
	@echo "\033[32m----All clean!----\033[0m" 

re : fclean all
