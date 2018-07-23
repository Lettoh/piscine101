/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 20:02:02 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 09:55:32 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_change_nb(int n)
{
	if (n > 9)
	{
		ft_change_nb(n / 10);
		ft_change_nb(n % 10);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
	}
}

void	ft_select(int a, int b)
{
	if (a <= 9)
	{
		ft_putchar('0');
		ft_putchar(a + '0');
	}
	else
	{
		ft_change_nb(a);
	}
	ft_putchar(' ');
	if (b <= 9)
	{
		ft_putchar('0');
		ft_putchar(b + '0');
	}
	else
	{
		ft_change_nb(b);
	}
	if (!(a == 98 && b == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = 0;
		while (b <= 99)
		{
			if (a < b)
			{
				ft_select(a, b);
			}
			b++;
		}
		a++;
	}
}
