/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush01.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 17:42:37 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 11:31:05 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	l1(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('/');
		}
		else if (x > i)
		{
			ft_putchar('*');
		}
		else if (x == i)
		{
			ft_putchar('\\');
			ft_putchar('\n');
		}
		i++;
	}
}

void	lx(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('*');
			if (x == 1)
				ft_putchar('\n');
		}
		else if (x > i)
		{
			ft_putchar(' ');
			if (x == 1)
				ft_putchar('\n');
		}
		else if (x == i)
		{
			ft_putchar('*');
			ft_putchar('\n');
		}
		i++;
	}
}

void	ll(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('\\');
		}
		else if (x > i)
		{
			ft_putchar('*');
		}
		else if (x == i)
		{
			ft_putchar('/');
			ft_putchar('\n');
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int i;

	i = 1;
	if (x > 0 && y > 0)
	{
		if (i == 1)
		{
			l1(x);
			i++;
			if (x == 1)
				ft_putchar('\n');
		}
		while (i < y)
		{
			lx(x);
			i++;
		}
		if (i == y)
		{
			ll(x);
			i++;
			if (x == 1)
				ft_putchar('\n');
		}
	}
}
