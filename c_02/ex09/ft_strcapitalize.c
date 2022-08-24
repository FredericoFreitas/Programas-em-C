/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhallamm <fhallamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:37:43 by fhallamm          #+#    #+#             */
/*   Updated: 2022/08/21 02:58:48 by fhallamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>

char	lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	*str = lowcase(str);
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[i] = str[i] - 32;
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 48 || str[i] > 57) && (str[i] < 97 || str[i] > 122))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				i++;
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s", ft_strcapitalize(str));
}
*/
