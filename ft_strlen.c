/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahmad <eahmad@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:44:55 by eahmad            #+#    #+#             */
/*   Updated: 2024/07/09 16:45:01 by eahmad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)

{
int i;

i = 0;

while (str[i] != ('\0'))
{
    i++;
}
return (i);

}
int main(void)

{
    char    *s;
    s = "-abcd124ewrasfae";
    
   printf("%d", ft_strlen(s));

    return (0);
}
