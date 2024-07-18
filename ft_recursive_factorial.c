/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahmad <eahmad@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:24:44 by eahmad            #+#    #+#             */
/*   Updated: 2024/07/13 11:24:55 by eahmad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)

{
	if (nb == 0)
	{
		return (1); // base case, we dont deal with negative numbers
	}
	return (nb * ft_recursive_factorial(nb - 1)); //function calls it self, multiples result by nb, decreses -1 until nb is 0
}

int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
	return (0);
}
