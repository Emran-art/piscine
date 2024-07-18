/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahmad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:45:50 by eahmad            #+#    #+#             */
/*   Updated: 2024/07/03 19:46:02 by eahmad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{

	*div = a / b; // performing integer division and resultto point to div
	*mod = a % b; //puts the rest to location pointed by mod

}

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;
	
	a = 5;
	b = 3;
	div = &a; //assing the addres of a to div
	mod = &b; //assing the addres of b to mod

	
	//int *div = a / b; // a / jaettuna b = 1 (jako /)
	//int *mod = a % b; // jaljelle jaa 2  (jaannos %)
	
	//printf(" a : %d, b : %d\n", a, b);
	
	ft_div_mod(a, b, div, mod);
	
	printf("a : %d, b : %d\n", a, b);
	
	return (0);
}



/*printf("a : %d, b : %d\n", a, b);*/
