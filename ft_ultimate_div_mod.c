/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahmad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:47:53 by eahmad            #+#    #+#             */
/*   Updated: 2024/07/03 19:48:01 by eahmad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int div;
	int mod;
	
	div = *a; //store the value pointed by a in div
	mod = *b; //store the value pointed by b in mod
	
	*a = div / mod; //perform division and put the result in location pointed by a
	*b = div % mod;

}

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;
	
	a = 5;
	b = 3;
	div = &a; //assign the addres of a to div
	mod = &b;

	//int *div = a / b; // a / jaettuna b = 1 (jako /)
	//int *mod = a % b; // jaljelle jaa 2  (jaannos %)
	
	//printf(" a : %d, b : %d\n", a, b);
	
	ft_ultimate_div_mod(&a, &b);
	
	printf("a : %d, b : %d\n", a, b);
	
	return (0);
}

