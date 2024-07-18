/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahmad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:14:16 by eahmad            #+#    #+#             */
/*   Updated: 2024/07/03 19:14:34 by eahmad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// declare ft_ult that takes 9 lvl ptr
void	ft_ultimate_ft(int *********nbr) // a pointer that goes 9times to get integer value

{
	*********nbr = 42; //dereferences the pointer 9 tiems to acces the value and change to 42
}

int	main(void)
{
	// Declaring integer variable with multiple levels of ptr to points to n
	int	n;
	int	*nbr8;
	int	**nbr7;
	int	***nbr6;
	int	****nbr5;
	int	*****nbr4;
	int	******nbr3;
	int	*******nbr2;
	int	********nbr1;
	int	*********nbr;
	
	n = 11; //initialize n with value 11
	
	nbr8 = &n;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1; // starts from point8 to addres of final ptr
	
	ft_ultimate_ft(nbr); // calling the function to set n to 42 throug mlt lvl ptrs
	printf("%d", n); //print the value of n, which is now 42, (D Digits)
	return (0); //return 0 to print succesfull excecution
	
}
