NAME = libft.a
SRCS = ft_atoi.c \
	ft_isdigit.c \
	ft_memcpy.c \
	ft_putstr_fd.c \
	ft_strlcpy.c \
	ft_strtrim.c \
	ft_bzero.c \
	ft_isprint.c \
	ft_memmove.c \
	ft_split.c \
	ft_strlen.c \
	ft_substr.c \
	ft_calloc.c \
	ft_itoa.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strmapi.c \
	ft_tolower.c \
	ft_isalnum.c \
	ft_memccpy.c \
	ft_putchar_fd.c \
	ft_strdup.c \
	ft_strncmp.c \
	ft_toupper.c \
	ft_isalpha.c \
	ft_memchr.c \
	ft_putendl_fd.c \
	ft_strjoin.c \
	ft_strnstr.c \
	ft_isascii.c \
	ft_memcmp.c \
	ft_putnbr_fd.c \
	ft_strlcat.c \
	ft_strrchr.c
BONUS_SRCS = ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c\
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c

FLAGS = -Wall -Wextra -Werror

REG_OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS_SRCS:.c=.o}

ifdef WITH_BONUS
OBJS = $(REG_OBJS) $(BONUS_OBJS)
else
OBJS = $(REG_OBJS)
endif

.c.o:
	gcc ${FLAGS} -c $< -o ${<:.c=.o}

.PHONY: all
all: ${NAME}

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

.PHONY: clean
clean:
	rm -f ${OBJS} ${BONUS_OBJS}

.PHONY: fclean
fclean: clean
	rm -f ${NAME}

.PHONY: re
re: fclean all

.PHONY: bonus
bonus:
	$(MAKE) WITH_BONUS=1 all

