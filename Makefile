NAME			= libft.a

CC				= cc

CFLAGS			= -Wall -Wextra -Werror

RM				= rm -f

AR				= ar rc



all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS)
