/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahmad <eahmad@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:01:59 by eahmad            #+#    #+#             */
/*   Updated: 2024/07/06 14:02:05 by eahmad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if
	(str[i] >= 'a' || str[i] <= 'z')
	str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main(void)
{
char	a[] = "moiabc";

	printf("%s\n", ft_strupcase(a));
	return (0);
}
