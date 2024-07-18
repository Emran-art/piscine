/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahmad <eahmad@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:15:29 by eahmad            #+#    #+#             */
/*   Updated: 2024/07/08 13:15:40 by eahmad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)

{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != ('\0'))
	{
		i++;
	}
	while (src[j] != ('\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)

{
    char str1[50] = "Moi";
    char str2[] = "Vaan";
    
    ft_strcat(str1, str2);
    
    printf("%s \n", str1);
}
