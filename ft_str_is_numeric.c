/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahmad <eahmad@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:28:00 by eahmad            #+#    #+#             */
/*   Updated: 2024/07/06 12:28:06 by eahmad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
		{	
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	int	c;

	char	a[] = ("3");

	c = ft_str_is_numeric(a);
	printf("%d\n", c);
	return (0);
}
