/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush04.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <fleonard@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 18:55:14 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 23:28:17 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../srcs/header.h"

char	position04(int col, int row, int x, int y)
{
	char	c;

	c = 'B';
	if ((row == 1 && col == 1) || (row == x && col == y && y > 1))
		c = 'A';
	else if ((row == x && col == 1) || (row == 1 && col == y))
		c = 'C';
	else if ((row > 1 && col > 1) && (row < x && col < y))
		c = ' ';
	return (c);
}

t_list	*rush04(int x, int y)
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
			ft_list_push_back(&str, position04(col, row, x, y));
			row++;
		}
		ft_list_push_back(&str, '\n');
		col++;
	}
	return (str);
}
