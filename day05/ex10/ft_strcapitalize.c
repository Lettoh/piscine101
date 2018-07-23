/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 16:55:26 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 22:03:36 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_is_alphanum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char *i;

	i = str;
	while (*i != '\0')
	{
		if (ft_is_alphanum(*(i - 1)) && *i >= 'A' && *i <= 'Z')
			*i += 32;
		if (!ft_is_alphanum(*(i - 1)) && *i >= 'a' && *i <= 'z')
			*i -= 32;
		i++;
	}
	return (str);
}
