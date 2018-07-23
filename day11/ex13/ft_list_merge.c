/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_merge.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 17:22:29 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 19:36:57 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list;

	list = *begin_list1;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = begin_list2;
	}
}
