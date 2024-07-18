/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahmad <eahmad@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:03:41 by eahmad            #+#    #+#             */
/*   Updated: 2024/07/13 09:03:50 by eahmad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)

{
	int	result;

	result = 1; // holds the result of factorial calculation proces
	if (nb < 0)
	{
		return (0); //do not have to deal with negative numbers
	}
	while (nb > 0)
	{
		result *= nb; //result=1*5, result 5*4, result 20*3, result 60 *2, result 120*1
		nb--;
	}
	return (result); //final result of factorial number
}
int	main(void)

{

	printf("output : %d\n", ft_iterative_factorial(5));
}
