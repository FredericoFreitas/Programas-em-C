/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhallamm <fhallamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 07:31:43 by fhallamm          #+#    #+#             */
/*   Updated: 2022/08/20 22:01:18 by fhallamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	if (size != 0)
	{
		while (src[index] != 0 && index <= (size -1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}

/*
int main(void)
{
	char src[] = "world";
	char dest[] = "hello";
	printf("%d | %s", ft_strlcpy(dest, src, 2), dest);
}
*/
