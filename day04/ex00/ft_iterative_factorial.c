/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 16:52:13 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 22:16:59 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb > 1 && nb < 13)
	{
		while (i > 1)
		{
			i--;
			nb = nb * i;
		}
		return (nb);
	}
	else if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
