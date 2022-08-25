/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhallamm <fhallamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:45:46 by fhallamm          #+#    #+#             */
/*   Updated: 2022/08/24 22:06:04 by fhallamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int main(void)
{
	int i;

	char str[] = "hello";
	i = ft_strlen(str);
	write(1, &i + 48, 1);
	return (0);
}
*/
