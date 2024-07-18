/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahmad <eahmad@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:23:40 by eahmad            #+#    #+#             */
/*   Updated: 2024/07/10 10:23:47 by eahmad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)

{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int main(void)

{
char    *s;
	s = "moikka moii";

	ft_putstr(s);
	return (0);
}
