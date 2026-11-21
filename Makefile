NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCF = srcfiles
INC = $(SRCF)/includes
LIB = -I $(INC)

SRCES = $(SRCF)/check_error/check.c \
		$(SRCF)/check_error/check_dup.c \
		$(SRCF)/check_error/ft_atoi.c \
		$(SRCF)/check_error/is_integer.c \
		$(SRCF)/Operations/pa.c \
		$(SRCF)/Operations/pb.c \
		$(SRCF)/Operations/ra.c \
		$(SRCF)/Operations/rb.c \
		$(SRCF)/Operations/rra.c \
		$(SRCF)/Operations/rrb.c \
		$(SRCF)/Operations/rr.c \
		$(SRCF)/Operations/rrr.c \
		$(SRCF)/Operations/sa.c \
		$(SRCF)/Operations/sb.c \
		$(SRCF)/Operations/ss.c \
		$(SRCF)/helper/return_min.c \
		$(SRCF)/helper/index_min.c \
		$(SRCF)/helper/count_nodes.c \
		$(SRCF)/helper/sort_three.c \
		$(SRCF)/helper/sort_two.c \
		$(SRCF)/helper/is_sorted.c \
		$(SRCF)/helper/ft_putstr.c



OBJECTS = $(SRCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o:%.c $(INC)/hedear.h
	$(CC) $(CFLAGS) $(LIB) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re