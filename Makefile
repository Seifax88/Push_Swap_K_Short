NAME = push_swap

CC	= gcc

HEADERS:= -I ./includes 

#CFLAGS = -Wall -Werror -Wextra -fsanitize=address -g3 $(HEADERS)
CFLAGS = -Wall -Werror -Wextra -g3 $(HEADERS)
#valgrind --leak-check=full --show-leak-kinds=all
#CFLAGS = -Wall -Werror -Wextra $(HEADERS) 
#ARG=$(seq -1000 1000 | sort -R | tail -n 2 | tr '\n' ' ');
#./push_swap $ARG | ./checker_linux $ARG
#% ARG=$(seq -1000 1000 | sort -R | tail -n 500 | tr '\n' ' '); ./push_swap $ARG > out

# Colors
RED =			\033[0;31m
GREEN =			\033[0;92m
CYAN =			\033[0;96m
BLUE=			\033[0;34m
PURPLE=			\033[0;95m
YELLOW =		\033[0;93m
RESET=			\033[0m

SRCS :=	 $(addprefix sources/, \
	core/main.c core/utils.c	core/init.c\
	parsing/parse.c	parsing/parse_utils.c	parsing/parse_overflow.c	parsing/parse_lst.c\
	moves/swap.c	moves/push.c	moves/rotate.c	moves/reverse_rotate.c\
	sorts/sort_three.c	sorts/sort_four.c	sorts/sort_five.c)

SRCS_LIB := $(addprefix ./libft/, \
	ft_printf.c	ft_putchar.c	ft_isdigit.c	ft_puthexadecimal.c	ft_putnbr.c\
	ft_putpadress.c	ft_putstr.c	ft_putunbr.c	ft_split.c	ft_strlen.c\
	ft_atoi.c	ft_atoll.c	ft_lstadd_back_bonus.c	ft_lstadd_front_bonus.c	ft_lstclear_bonus.c\
	ft_lstlast_bonus.c	ft_lstnew_bonus.c	ft_lstsize_bonus.c	ft_sqrt.c)

OBJS = $(SRCS:.c=.o) $(SRCS_LIB:.c=.o)

$(NAME) : $(OBJS)
	make print_title
	@echo "$(GREEN)Creando ejecutable"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Ejecutable Creado$(RESET)"


all : $(NAME) print_title 

print_title:
	echo "$(PURPLE)██████╗ ██╗   ██╗███████╗██╗  ██╗        ███████╗██╗    ██╗ █████╗ ██████╗ "
	echo "██╔══██╗██║   ██║██╔════╝██║  ██║        ██╔════╝██║    ██║██╔══██╗██╔══██╗"
	echo "██████╔╝██║   ██║███████╗███████║        ███████╗██║ █╗ ██║███████║██████╔╝"
	echo "██╔═══╝ ██║   ██║╚════██║██╔══██║        ╚════██║██║███╗██║██╔══██║██╔═══╝ "
	echo "██║     ╚██████╔╝███████║██║  ██║███████╗███████║╚███╔███╔╝██║  ██║██║     "
	echo "╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝     $(RESET)"

clean :
	rm -fr $(OBJS)

fclean : clean
	rm -f  $(NAME)

re : fclean all

.PHONY: all clean fclean re print_title
.SILENT: print_title