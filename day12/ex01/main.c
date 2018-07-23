/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 16:14:01 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 18:14:43 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_display.h"

int		main(int argc, char **argv)
{
	int		i;
	char	c;

	i = 1;
	while (argc == 1)
	{
		read(2, &c, 1);
		ft_putchar(c);
	}
	while (i < argc)
	{
		ft_cat(argv[i]);
		i++;
	}
	return (0);
}
