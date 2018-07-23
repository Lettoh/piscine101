/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   header.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <fleonard@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 14:45:39 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 22:41:49 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

t_list				*ft_create_elem(char data);
void				ft_list_push_back(t_list **begin_list, char data);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
int					find_type(t_list *str, int x, int y);
int					ft_strcmp(t_list *s1, t_list *s2);
t_list				*find_dimensions(int *ligne, int *carac);
void				print_result(int x, int y, int i, int count);
char				position00(int col, int row, int x, int y);
t_list				*rush00(int x, int y);
char				position01(int col, int row, int x, int y);
t_list				*rush01(int x, int y);
char				position02(int col, int row, int x, int y);
t_list				*rush02(int x, int y);
char				position03(int col, int row, int x, int y);
t_list				*rush03(int x, int y);
char				position04(int col, int row, int x, int y);
t_list				*rush04(int x, int y);
void				destroy_list(t_list	**begin_list);

#endif
