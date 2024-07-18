/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahmad <eahmad@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:30:25 by eahmad            #+#    #+#             */
/*   Updated: 2024/07/06 13:30:42 by eahmad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z'))
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
	char	a[] = "asd";

	c = ft_str_is_lowercase(a);
	printf("%d\n", c);
	return (0);
}
