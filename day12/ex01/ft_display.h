/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display.h                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 16:11:52 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 20:08:56 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_DISPLAY_H
# define FT_DISPLAY_H
# define BUF_SIZE 4096
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putchar2(char c);
void	ft_putstr2(char *argv);
int		ft_cat(char *argv);
void	ft_error1(char *argv);
void	ft_error2(char *argv);
void	ft_error3(char *argv);
void	ft_error4(char *argv);

#endif
