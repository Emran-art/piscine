/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljylhank <ljylhank@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 10:30:02 by ljylhank          #+#    #+#             */
/*   Updated: 2024/06/29 15:16:04 by ljylhank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	writechar(int x, int y, int xc, int yc)
{
	if ((xc == 0 && yc == 0) || (xc == 0 && yc == y))
	{
		ft_putchar('o');
	}
	else if ((xc == x && yc == 0) || (xc == x && yc == y))
	{
		ft_putchar('o');
	}
	else if (yc != 0 && yc != y && xc > 0 && xc < x)
	{
		ft_putchar(' ');
	}
	else if ((yc == 0 || yc == y) && xc > 0 && xc < x)
	{
		ft_putchar('-');
	}
	else if (yc != 0 && yc != y && (xc == 0 || xc == x))
	{
		ft_putchar('|');
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
