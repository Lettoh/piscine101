#**************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 15:00:48 by fleonard     #+#   ##    ##    #+#        #
#    Updated: 2018/07/19 15:33:00 by fleonard    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = ft_cat

FLAGS = -Wall -Wextra -Werror

FILES = ft_putchar.c ft_putstr.c main.c ft_cat.c ft_putchar2.c ft_putstr2.c ft_error.c

OBJ = ft_putchar.o ft_putstr.o main.o ft_cat.o ft_putchar2.o ft_putstr2.o ft_error.o

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAGS) -o $(NAME) $(OBJ)

ft_putchar.o : ft_putchar.c
	gcc $(FLAGS) -c ft_putchar.c -I ft_display.h

ft_putstr.o : ft_putstr.c
	gcc $(FLAGS) -c ft_putstr.c -I ft_display.h

main.o : main.c
	gcc $(FLAGS) -c main.c -I ft_display.h

ft_cat.o : ft_cat.c
	gcc $(FLAGS) -c ft_cat.c -I ft_display.h

ft_putchar2.o : ft_putchar2.c
	gcc $(FLAGS) -c ft_putchar2.c -I ft_display.h

ft_putstr2.o : ft_putstr2.c
	gcc $(FLAGS) -c ft_putstr2.c -I ft_display.h

ft_error.o : ft_error.c
	gcc $(FLAGS) -c ft_error.c -I ft_display.h

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
