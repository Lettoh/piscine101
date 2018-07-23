/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_map.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 15:21:19 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 11:10:35 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int *res;

	res = malloc(sizeof(*tab) * lenght + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		res[i] = f(tab[i]);
		i++;
	}
	res[i] = NULL;
	return (res);
}
