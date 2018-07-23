# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 15:00:48 by fleonard     #+#   ##    ##    #+#        #
#    Updated: 2018/07/18 11:28:00 by fleonard    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/

HEADER = ./includes/

FLAGS = -Wall -Wextra -Werror

FILES = $(SRCS)ft_putchar.c $(SRCS)ft_putstr.c $(SRCS)ft_strcmp.c $(SRCS)ft_strlen.c $(SRCS)ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
			ranlib $(NAME)

ft_putchar.o : $(SRCS)ft_putchar.c
		gcc $(FLAGS) -c $(SRCS)ft_putchar.c -I $(HEADER)

ft_putstr.o : $(SRCS)ft_putstr.c
		gcc $(FLAGS) -c $(SRCS)ft_putstr.c -I $(HEADER)

ft_strcmp.o : $(SRCS)ft_strcmp.c
		gcc $(FLAGS) -c $(SRCS)ft_strcmp.c -I $(HEADER)

ft_strlen.o : $(SRCS)ft_strlen.c
		gcc $(FLAGS) -c $(SRCS)ft_strlen.c -I $(HEADER)

ft_swap.o : $(SRCS)ft_swap.c
		gcc $(FLAGS) -c $(SRCS)ft_swap.c -I $(HEADER)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all
