# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: fleonard <fleonard@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/21 14:54:10 by naplouvi     #+#   ##    ##    #+#        #
#    Updated: 2018/07/22 21:16:37 by fleonard    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = colle-2

FLAGS = -Wall -Wextra -Werror

FILES = srcs/fcts.c srcs/main.c rush/rush00.c rush/rush01.c rush/rush02.c \
		rush/rush03.c rush/rush04.c srcs/struct.c

HEADER = header.h

OBJ = fcts.o main.o rush00.o rush01.o rush02.o rush03.o rush04.o struct.o

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAGS) -o $(NAME) $(OBJ)

fcts.o: srcs/fcts.c
	gcc $(FLAGS) -c srcs/fcts.c -I $(HEADER)

struct.o: srcs/struct.c
	gcc $(FLAGS) -c srcs/struct.c -I $(HEADER)

main.o : srcs/main.c
	gcc $(FLAGS) -c srcs/main.c -I $(HEADER)

rush00.o : rush/rush00.c
	gcc $(FLAGS) -c rush/rush00.c -I $(HEADER)

rush01.o : rush/rush01.c
	gcc $(FLAGS) -c rush/rush01.c -I $(HEADER)

rush02.o : rush/rush02.c
	gcc $(FLAGS) -c rush/rush02.c -I $(HEADER)

rush03.o : rush/rush03.c
	gcc $(FLAGS) -c rush/rush03.c -I $(HEADER)

rush04.o : rush/rush04.c
	gcc $(FLAGS) -c rush/rush04.c -I $(HEADER)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
