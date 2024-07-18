/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahmad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:23:47 by eahmad            #+#    #+#             */
/*   Updated: 2024/07/03 19:24:08 by eahmad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b) // function declatarion

{
	int swap = *a; // this function takes two pointer to integers and swaps values they point to
	*a = *b;
	*b = swap;
}
int	main(void)
{
	int	a; //declaring two integ variables
	int	b;

	int	*ptra; //declaring pointer to interger ptra
	int	*ptrb;

	a = 1; //just initializing a to 1 and b to 2
	b = 2;

	ptra = &a; // assignin addres of ptra to a// now ptra points to a
	ptrb = &b;

	ft_swap(ptra, ptrb); // calls ft_swap to change values

	printf("a : %d, b : %d\n", a, b); // prints the value of a 2 and b 1

	// the idea is to change values of two int without creating new values
	return (0);
}
