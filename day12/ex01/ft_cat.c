/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_cat.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 18:18:55 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 09:56:44 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_display.h"

int		ft_check(int fd, char *argv)
{
	if (fd == -1 && errno == ENAMETOOLONG)
		ft_error4(argv);
	if (fd == -1 && errno == ENOENT)
		ft_error2(argv);
	if (fd == -1 && errno == EACCES)
		ft_error3(argv);
	return (0);
}

int		ft_errno(char *argv)
{
	if (errno == EISDIR)
		ft_error1(argv);
	if (errno == ENAMETOOLONG)
		ft_error4(argv);
	return (0);
}

int		ft_cat(char *argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	errno = 0;
	fd = open(argv, O_RDONLY);
	ft_check(fd, argv);
	if (fd == -1)
		return (1);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (errno != 0)
		{
			ft_errno(argv);
			return (0);
		}
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}
