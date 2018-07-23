/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_btree.h                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/20 22:35:26 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 22:35:53 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <stdlib.h>

typedef struct			s_btree
{
	struct s_btree		*left;
	struct s_btree		*right;
	void				*item;
}						t_btree;

t_btree					*btree_create_node(void *item);
t_btree					*btree_apply_prefix(t_btree *root,
						void (*applyf)(void *));
t_btree					*btree_apply_infix(t_btree *root,
						void (*applyf)(void *));
t_btree					*btree_apply_suffix(t_btree *root,
						void (*applyf)(void *));
#endif
