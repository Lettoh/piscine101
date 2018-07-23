/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_collatz_conjecture.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 13:42:45 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 15:12:37 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int				i;
	unsigned int	baseinitiale;

	i = 1;
	baseinitiale = base;
	while (i > 0)
	{
		if (base == 1)
			return (1);
		if (base % 2 == 0)
			base = base / 2;
		else if (base % 2 != 0)
			base = (base * 3) + 1;
		if (base == 1)
			return (i);
		else
			i++;
	}
	return (0);
}
