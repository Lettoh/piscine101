/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_prime.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 11:37:47 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 12:55:40 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int count;
	int test;

	i = 2;
	test = 0;
	count = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			test = i;
			count++;
		}
		i++;
	}
	if (test == nb && count == 1)
		return (1);
	else
		return (0);
}
