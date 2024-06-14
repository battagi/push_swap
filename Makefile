CC = cc
CFLAGS = #-Wall -Wextra -Werror -fsanitize=address -g

RM = rm -rf  
HEADERS = ./mandatory/push_swap.h 
SRCS = mandatory/main.c  mandatory/ft_fill_stack.c mandatory/ft_utils.c


NAME = push_swap 
OBJS = $(SRCS:.c=.o)
LIBFT=libft/libft.a


all : $(NAME)

$(NAME) : $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(LIBFT)  $(OBJS) -o $(NAME)

$(LIBFT):
	make -C libft/

clean:
	@$(RM) $(OBJS) 
	@make clean -C libft

%.o : %.c $(HEADERS) 
	$(CC) $(CFLAGS) -c $< -o $@ 

fclean : clean 
		@$(RM) $(NAME) 
		@make fclean -C libft

re : fclean all 

.PHONY: all clean fclean re 