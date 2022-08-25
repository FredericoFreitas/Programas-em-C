/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhallamm <fhallamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 05:49:08 by fhallamm          #+#    #+#             */
/*   Updated: 2022/08/25 02:16:07 by fhallamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	count;
	int	i;
	int	result;

	count = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] != '\0') && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
		{
			count *= -1;
		}
		i++;
	}
	result = 0;
	while ((str[i] != '\0') && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (count * result);
}
/*
int main()
{
	char *s = "  ---+--+0123456789fhh566";
	printf("%d", ft_atoi(s));
}
*/
