/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_error.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 13:50:30 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 20:08:43 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_display.h"

void	ft_error1(char *argv)
{
	ft_putstr2("ft_cat: ");
	ft_putstr2(argv);
	ft_putstr2(": Is a directory\n");
}

void	ft_error2(char *argv)
{
	ft_putstr2("ft_cat: ");
	ft_putstr2(argv);
	ft_putstr2(": No such file or directory\n");
}

void	ft_error3(char *argv)
{
	ft_putstr2("ft_cat: ");
	ft_putstr2(argv);
	ft_putstr2(": Permission denied\n");
}

void	ft_error4(char *argv)
{
	ft_putstr2("ft_cat: ");
	ft_putstr2(argv);
	ft_putstr2(": File name too long\n");
}
