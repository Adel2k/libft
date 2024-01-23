NAME			= libft.a

SRCS			=	ft_strlcpy.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_putchar_fd.c ft_putendl.c ft_putstr_fd.c  ft_strchr.c ft_strlen.c ft_strrchr.c ft_strstr.c ft_tolower.c ft_toupper.c ft_memmove.c ft_strncmp.c ft_memchr.c ft_memcmp.c \

					
OBJS			= $(SRCS:.c=.o)

INClUDE			=	-I libft.h

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -Iinclude

.DEFAULT_GOAL	=	all

%.o:	%.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

all:			$(NAME)	

$(NAME) :		$(OBJS)
				ar rcs $(NAME) $(OBJS)	

clean :
				$(RM) $(OBJS)

fclean :			clean
				$(RM) $(NAME)

re :				fclean $(NAME)



.PHONY:			all clean fclean re bonus
