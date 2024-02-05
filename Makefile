NAME = libft.a

SRCS =	ft_putnbr_fd.c ft_putendl_fd.c ft_strmapi.c ft_itoa.c ft_strtrim.c ft_striteri.c ft_strjoin.c ft_substr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_putchar_fd.c ft_split.c ft_putstr_fd.c  ft_strchr.c ft_strlen.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_memmove.c ft_strncmp.c ft_memchr.c ft_calloc.c ft_strnstr.c ft_memcmp.c ft_strlcat.c\

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
					
OBJS = $(SRCS:.c=.o)

BONUS-OBJS = $(BONUS:.c=.o)

INClUDE	=	-I libft.h

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror $(INTCLUDE)
.DEFAULT_GOAL =	all

%.o:	%.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)	

$(NAME) :	$(OBJS)
			ar rcs $(NAME) $(OBJS)

bonus :		$(BONUS-OBJS) $(OBJS) 
			ar rcs $(NAME) $(OBJS) $(BONUS-OBJS)

clean :
			$(RM) $(OBJS) $(BONUS-OBJS)

fclean :	clean
			$(RM) $(NAME)

re :	fclean $(NAME)

.PHONY:			all clean fclean re bonus
