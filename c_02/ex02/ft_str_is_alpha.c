/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhallamm <fhallamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 06:09:07 by fhallamm          #+#    #+#             */
/*   Updated: 2022/08/17 19:06:16 by fhallamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			if (str[i] < 97 || str[i] > 122)
				return (0);
		i++;
	}
	return (1);
}

/*
int main(void)
{
	printf("%d", ft_str_is_alpha("Qurngd"));
	printf("%d", ft_str_is_alpha("dfgdg"));
	printf("%d", ft_str_is_alpha("fd15488"));
}*/	
