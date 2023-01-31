NAME = abs

SRCS =  main.cpp \
		Animal.cpp \
		Brain.cpp \

OBJS = $(SRCS:.cpp=.o)

CC = c++

CPPFLAGS = -Werror -Wall -Wextra -std=c++98

RM = rm -f

all:	$(NAME)

$(NAME):$(OBJS)
	$(CC) $(OBJS) $(CPPFLAGS) -o $(NAME)
	
clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all
