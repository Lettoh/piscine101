/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_at.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 15:06:10 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 19:31:19 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list		*list;
	unsigned	i;

	i = 1;
	list = begin_list;
	if (list)
	{
		while (i < nbr)
		{
			list = list->next;
			i++;
		}
	}
	return (list);
}
