# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 15:00:48 by fleonard     #+#   ##    ##    #+#        #
#    Updated: 2018/07/19 11:49:02 by fleonard    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = ft_display_file

FLAGS = -Wall -Wextra -Werror

FILES = ft_putchar.c ft_putstr.c main.c ft_display.c ft_putchar2.c ft_putstr2.c

OBJ = ft_putchar.o ft_putstr.o main.o ft_display.o ft_putchar2.o ft_putstr2.o

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAGS) -o $(NAME) $(OBJ)

ft_putchar.o : ft_putchar.c
	gcc $(FLAGS) -c ft_putchar.c -I ft_display.h

ft_putstr.o : ft_putstr.c
	gcc $(FLAGS) -c ft_putstr.c -I ft_display.h

main.o : main.c
	gcc $(FLAGS) -c main.c -I ft_display.h

ft_display.o : ft_display.c
	gcc $(FLAGS) -c ft_display.c -I ft_display.h

ft_putchar2.o : ft_putchar2.c
	gcc $(FLAGS) -c ft_putchar2.c -I ft_display.h

ft_putstr2.o : ft_putstr2.c
	gcc $(FLAGS) -c ft_putstr2.c -I ft_display.h

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
