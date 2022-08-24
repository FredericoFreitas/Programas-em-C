/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhallamm <fhallamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:08:29 by fhallamm          #+#    #+#             */
/*   Updated: 2022/08/17 20:23:41 by fhallamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	printf("%d", ft_str_is_printable("sfd6555sAA"));
	printf("%d", ft_str_is_printable("@@#$"));
	printf("%d", ft_str_is_printable("ç"));
	printf("%d", ft_str_is_printable("$@#$@"));
}
*/
