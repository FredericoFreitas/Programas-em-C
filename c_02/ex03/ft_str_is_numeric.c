/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhallamm <fhallamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:07:07 by fhallamm          #+#    #+#             */
/*   Updated: 2022/08/17 19:31:10 by fhallamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}	
	return (1);
}

/*
int main(void)
{
	printf("%d", ft_str_is_numeric("1568"));
	printf("%d", ft_str_is_numeric("1dff"));
	printf("%d", ft_str_is_numeric("ffssdf"));
}
*/
