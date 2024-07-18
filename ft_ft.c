/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahmad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:11:48 by eahmad            #+#    #+#             */
/*   Updated: 2024/07/03 19:12:16 by eahmad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr) // ft_ft takes single argument: a pointer to an integer

{
	*nbr = 42; //derefences the pointer nbr and sets value for it 42
}


int	main(void)
{
	int	a;  // declaring int variable a
	int	*ptr; // declaring a pointer to an integer
	
	ptr = &a; // assignin the addres of a to pointer ptr
	
	ft_ft(ptr); //calling the function and passing the pointer
	
	printf("%d", a); // prints the value of a wich is digit 42
}

