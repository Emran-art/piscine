/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahmad <eahmad@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:24:08 by eahmad            #+#    #+#             */
/*   Updated: 2024/07/06 15:24:14 by eahmad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if
		(str[i] >= 'A' || str[i] <= 'Z')
	str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char a[] = "MOI";

	printf("%s\n", ft_strlowcase(a));
	return (0);
}
