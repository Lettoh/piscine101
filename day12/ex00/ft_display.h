/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display.h                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 16:11:52 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 19:57:40 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_DISPLAY_H
# define FT_DISPLAY_H
# define BUF_SIZE 4096
# include <unistd.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_display(char *argv);
void	ft_putchar2(char c);
void	ft_putstr2(char *argv);

#endif
