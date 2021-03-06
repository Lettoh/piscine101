/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_sort.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 15:47:38 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 19:24:42 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		while (f(tab[i], tab[i + 1]) >= 0)
			i++;
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
	}
	return (1);
}
