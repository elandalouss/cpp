NAME = ex03

SRCS =  main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp \

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
