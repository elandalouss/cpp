NAME = HarlFilter

SRCS =  main.cpp \
		Harl.cpp \

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Werror -Wall -Wextra -std=c++98

RM = rm -f

all:	$(NAME)

$(NAME):$(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)
	
clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all
