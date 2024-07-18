/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljylhank <ljylhank@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 17:55:15 by ljylhank          #+#    #+#             */
/*   Updated: 2024/06/29 17:56:33 by ljylhank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	writechar(int x, int y, int xc, int yc)
{
	if ((xc == 0 && yc == 0) || (xc == x && yc == y && x != 0 && y != 0))
	{
		ft_putchar('/');
	}
	else if ((xc == x && yc == 0) || (xc == 0 && yc == y))
	{
		ft_putchar(92);
	}
	else if (yc != 0 && yc != y && xc > 0 && xc < x)
	{
		ft_putchar(' ');
	}
	else if ((yc == 0 || yc == y) && xc > 0 && xc < x)
	{
		ft_putchar('*');
	}
	else if (yc != 0 && yc != y && (xc == 0 || xc == x))
	{
		ft_putchar('*');
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
