/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush00.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <fleonard@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 18:36:32 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 21:47:10 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../srcs/header.h"

char	position00(int col, int row, int x, int y)
{
	char	c;

	c = 'o';
	if ((row > 1 && row < x) && (col > 1 && col < y))
		c = ' ';
	else if ((row > 1 && row < x) && (col == 1 || col == y))
		c = '-';
	else if ((row == 1 || row == x) && (col > 1 && col < y))
		c = '|';
	return (c);
}

t_list	*rush00(int x, int y)
{
	int		row;
	int		col;
	t_list	*str;

	col = 1;
	str = NULL;
	if (x <= 0 || y <= 0)
		return (NULL);
	while (col <= y)
	{
		row = 1;
		while (row <= x)
		{
			ft_list_push_back(&str, position00(col, row, x, y));
			row++;
		}
		ft_list_push_back(&str, '\n');
		col++;
	}
	return (str);
}
