/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_max.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 16:04:33 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 16:35:41 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_max(int *tab, int lenght)
{
	int	i;
	int k;

	i = 0;
	k = 0;
	if (lenght < 0)
		return (0);
	while (tab[i] > lenght)
	{
		if (tab[i] > k)
			k = tab[i];
		i++;
	}
	if (lenght > i)
		return (0);
	return (k);
}
