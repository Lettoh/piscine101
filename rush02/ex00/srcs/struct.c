/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   struct.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <fleonard@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 21:15:01 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 22:41:12 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "header.h"

t_list	*ft_create_elem(char data)
{
	t_list *list;

	list = (t_list*)malloc(sizeof(t_list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}

void	destroy_list(t_list **begin_list)
{
	t_list *current;
	t_list *next;

	current = *begin_list;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*begin_list = NULL;
}

void	ft_list_push_back(t_list **begin_list, char data)
{
	t_list *list;

	if (*begin_list != NULL)
	{
		list = *begin_list;
		while (list->next != NULL)
			list = list->next;
		list->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
