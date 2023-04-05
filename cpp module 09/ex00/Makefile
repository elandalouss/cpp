NAME = btc

SRCS =  main.cpp \
		BitcoinExchange.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CPPFLAGS = -Werror -Wall -Wextra -std=c++98 -g -fsanitize=address

RM = rm -f

all:	$(NAME)

$(NAME):$(OBJS)
	$(CC) $(OBJS) $(CPPFLAGS) -o $(NAME)
	
clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME) 

re:	fclean all
