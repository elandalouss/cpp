NAME = ex04

SRCS =  main.cpp \
		funcFile.cpp \

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Werror -Wall -Wextra -std=c++98

RM = rm -rf

all:	$(NAME)

$(NAME):$(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)
	
clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME) *.replace

re:	fclean all
