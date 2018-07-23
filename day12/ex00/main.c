/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 16:14:01 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 11:26:04 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_display.h"

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr2("File name missing.\n");
	if (argc > 2)
		ft_putstr2("Too many arguments.\n");
	else
		ft_display(argv[1]);
	return (0);
}
