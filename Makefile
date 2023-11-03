NAME			= libft.a

CC				= gcc

CFILES			= $(wildcard *.c)

OFILES			= $(CFILES:.c=.o)

CFLAGS			= -Wall -Wextra -Werror

RM				= rm -f

AR				= ar rc

all: $(NAME)

$(NAME): $(OFILES)
	$(AR) $(NAME) $(OFILES)

clean:
	$(RM) $(OFILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all
