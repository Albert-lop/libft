NAME = libft.a
SOURCES = \
	main.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c ft_strrchr.c\
	ft_strchr.c ft_strlen.c ft_memcpy.c ft_memset.c ft_memmove.c ft_memcmp.c ft_memchr.c ft_strlcpy.c ft_strlcat.c\
	ft_atoi.c ft_bzero.c ft_strncmp.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strtrim.c ft_split.c ft_itoa.c\
	ft_strmapi.c ft_striteri.c ft_putchard_fd.c


BSOURCES = \

OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURSES:.c=.0)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME) 

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS) 
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re