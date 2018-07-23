/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_takes_place.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/12 18:45:37 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 19:35:58 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_takes_place(int hour)
{
	if (hour == 0 || hour == 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00 A.M.\n");
	else if (hour > 0 && hour < 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d", hour);
		printf(".00 A.M. AND %d", hour + 1);
		printf(".00 A.M.\n");
	}
	else if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. AND 12.00 A.M.\n");
	else if (hour == 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d", hour);
		printf(".00 P.M. AND %d", hour + 1 - 12);
		printf(".00 P.M.\n");
	}
	else if (hour >= 12 && hour < 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d", hour - 12);
		printf(".00 P.M. AND %d", hour + 1 - 12);
		printf(".00 P.M.\n");
	}
}
