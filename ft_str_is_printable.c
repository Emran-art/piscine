/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahmad <eahmad@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:53:30 by eahmad            #+#    #+#             */
/*   Updated: 2024/07/06 13:53:35 by eahmad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32 || str[i] > 126))
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
	char a[] = "22";

	c = ft_str_is_printable(a);
	printf("%d\n", c);
	return (0);
}
