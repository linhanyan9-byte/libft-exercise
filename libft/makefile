NAME = libft.a
CC= cc
CFLAGS=-Werror -Wall -Wextra -I.
C_FILES = ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
			ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
			ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_toupper.c
C_BONUS_FILES = bonus/ft_lstnew.c 
O_FILES= $(C_FILES:.c=.o)
O_BONUS_FILES= $(C_BONUS_FILES:.c=.o)
all: $(NAME)
$(NAME): $(O_FILES) 
	ar rcs $(NAME) $(O_FILES) 
bonus: $(NAME) $(O_BONUS_FILES)
	ar rcs $(NAME) $(O_BONUS_FILES)
#we dont need anyting after clean:, because you dont need to build any dependencies#
clean: 
	rm -f $(O_FILES) $(O_BONUS_FILES)
fclean: clean
	rm -f $(NAME)
re: fclean all
$(O_FILES) $(O_BONUS_FILES): libft.h

.PHONY: re fclean clean bonus all