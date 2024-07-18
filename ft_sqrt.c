/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahmad <eahmad@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:19:43 by eahmad            #+#    #+#             */
/*   Updated: 2024/07/15 12:19:51 by eahmad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)

{
	int	n;

	n = 1;
	if (nb > 0) //check if nb is positive
	{
		while (n * n <= nb)  //loop until square n is less or equal to nb
		{
			if (n * n == nb) //if this is true it return int sqrt of nb
				return (n);
			else if (n >= 46341) //preventing overflow
				return (0);
			n++;
		}
	}
	return (0);
}

int	main(void)

{
	printf("%i", ft_sqrt(9));
	return (0);
}
