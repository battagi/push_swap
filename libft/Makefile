# Variable definitions
NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_split.c ft_itoa.c ft_strmapi.c ft_strdup.c ft_substr.c ft_atoi.c ft_strtrim.c ft_strjoin.c \
       ft_isalnum.c ft_isalpha.c ft_striteri.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strchr.c ft_strlcpy.c \
       ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_memcpy.c ft_memmove.c ft_memset.c\
       ft_bzero.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memchr.c\
	   get_next_line_bonus.c get_next_line_utils_bonus.c  \
	   ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c\
 	   ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c ft_split_count.c ft_free.c ft_is_int.c

   



OBJ = $(SRC:.c=.o)

AR = ar rcs

RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean all