/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhallamm <fhallamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:50:22 by fhallamm          #+#    #+#             */
/*   Updated: 2022/08/17 19:59:18 by fhallamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
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

	printf("%d", ft_str_is_uppercase("sffds"));
	printf("%d", ft_str_is_uppercase("AFSgdv"));
	printf("%d", ft_str_is_uppercase("FDFGDF"));
}
*/
