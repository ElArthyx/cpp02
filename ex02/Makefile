NAME = Fixed

SOURCES = main.cpp \
		  Fixed.cpp \

OBJECTS = $(SOURCES:.cpp=.o)
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

.cpp.o:
	$(CPP) $(CFLAGS) -c $< -o ${<:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CPP) $(CFLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
