/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fcts.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <fleonard@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 14:20:28 by wmoulin      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 22:40:24 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int		ft_strcmp(t_list *s1, t_list *s2)
{
	t_list	*s2_start;

	s2_start = s2;
	while (s1->next != NULL && s2->next != NULL)
	{
		if (s1->data != s2->data)
			return (1);
		s1 = s1->next;
		s2 = s2->next;
	}
	destroy_list(&s2_start);
	return (0);
}
