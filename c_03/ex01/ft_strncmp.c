/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhallamm <fhallamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 05:01:03 by fhallamm          #+#    #+#             */
/*   Updated: 2022/08/22 20:14:54 by fhallamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while ((i < n - 1) && s1[i] != '\0' && s2[i] != '\0'
		&& s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

/*
int main(void)
{
	char *s1 = "lisboa lisboa";
	char *s2 = "lisboa";
	int str;

	str = ft_strncmp(s1, s2, 50);
	printf("%i\n", str);
}
*/

/* strncmp = compara 2 strings caracterer por caracteres , 
 * ela compara ate o fim da string*/
