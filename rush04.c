/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturpela <mturpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:12:55 by mturpela          #+#    #+#             */
/*   Updated: 2024/06/30 15:11:02 by mturpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	writechar(int x, int y, int xc, int yc)
{
	if ((xc == 0 && yc == 0) || (xc == x && yc == y && x != 0 && y != 0))
	{
		ft_putchar('A');
	}
	else if ((xc == 0 && yc == y) || (xc == x && yc == 0))
	{
		ft_putchar('C');
	}
	else if (yc != 0 && yc != y && xc > 0 && xc < x)
	{
		ft_putchar(' ');
	}
	else if ((yc == 0 || yc == y) && xc > 0 && xc < x)
	{
		ft_putchar('B');
	}
	else if (yc != 0 && yc != y && (xc == 0 || xc == x))
	{
		ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int	xc;
	int	yc;

	yc = 0;
	if (x > 0 && y > 0)
	{
		while (yc < y)
		{
			xc = 0;
			while (xc < x)
			{
				writechar(x - 1, y - 1, xc, yc);
				xc++;
			}
			ft_putchar('\n');
			yc++;
		}
	}
}
