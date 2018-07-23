/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_door.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 16:01:12 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 16:01:25 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# include <unistd.h>
# include <string.h>

# define TRUE 1
# define FALSE 0
# define OPEN 1
# define CLOSE 0
# define EXIT_SUCCESS 0

typedef int		t_ft_bool;

typedef struct	s_door
{
	int			state;
}				t_door;

t_ft_bool		open_door(t_door *door);
t_ft_bool		close_door(t_door *door);
t_ft_bool		is_door_open(t_door *door);
t_ft_bool		is_door_close(t_door *door);
#endif
