/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   nmatch.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 17:32:11 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/23 23:13:07 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int		nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '*' && *s1 != '\0')
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	else if (*s1 == *s2 && *s1 != '*')
		return (nmatch(s1 + 1, s2 + 1));
	else if (*s1 == '*' && *s2 == '*')
		return (nmatch(s1 + 1, s2));
	else if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	else
		return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", nmatch(argv[1], argv[2]));
	return (0);
}
