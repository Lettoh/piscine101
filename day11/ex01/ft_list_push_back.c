/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_push_back.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 19:21:40 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 15:43:11 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	if (*begin_list != NULL)
	{
		list = *begin_list;
		while (list->next != NULL)
			list = list->next;
		list->next = ft_create_elem(data);
		list = list->next;
	}
	else
		*begin_list = ft_create_elem(data);
}
