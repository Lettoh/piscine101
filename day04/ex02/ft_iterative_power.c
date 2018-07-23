/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:25:58 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/21 18:46:56 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int puissance;

	puissance = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 0)
	{
		i = 1;
		while (i < power)
		{
			i++;
			nb = nb * puissance;
		}
		return (nb);
	}
	else
		return (0);
}
