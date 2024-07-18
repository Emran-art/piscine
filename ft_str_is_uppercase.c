/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahmad <eahmad@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:38:51 by eahmad            #+#    #+#             */
/*   Updated: 2024/07/06 13:38:58 by eahmad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z'))
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

	char	*a;

	a = "D";
	c = ft_str_is_uppercase(a);
	printf("%d\n", c);
	return (0);
}
