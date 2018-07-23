/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_sort.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 19:37:36 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 19:47:27 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list;
	t_list	*comp;
	t_list	*swp;

	swp = NULL;
	list = *begin_list;
	while (list->next)
	{
		comp = list->next;
		if (cmp(list->data, comp->data) <= 0)
		{
			list = list->next;
			comp = list->next;
		}
		else if (cmp(list->data, comp->data) > 0)
		{
			swp->data = comp->data;
			comp->data = list->data;
			list->data = swp->data;
		}
	}
}
