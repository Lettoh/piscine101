/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   btree_apply_suffix.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/20 22:36:41 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 22:36:46 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		if (root->left != NULL)
			btree_apply_suffix(root->left, applyf);
		if (root->right != NULL)
			btree_apply_suffix(root->right, applyf);
		applyf(root->item);
	}
}
