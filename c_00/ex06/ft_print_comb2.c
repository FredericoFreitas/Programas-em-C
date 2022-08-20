/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhallamm <fhallamm@student.42.pt>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:44:09 by fhallamm          #+#    #+#             */
/*   Updated: 2022/08/14 17:10:59 by fhallamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	writenumbers(int n1_a, int n1_b, int number_2)
{
	int	n2_a;
	int	n2_b;

	n2_a = number_2 / 10 + 48;
	n2_b = number_2 % 10 + 48;
	write(1, &n1_a, 1);
	write(1, &n1_b, 1);
	write(1, " ", 1);
	write(1, &n2_a, 1);
	write(1, &n2_b, 1);
}

void	ft_print_comb2(void)
{
	int	number_1;
	int	number_2;
	int	n1_a;
	int	n1_b;

	number_1 = 0;
	while (number_1 < 100)
	{
		n1_a = number_1 / 10 + 48;
		n1_b = number_1 % 10 + 48;
		number_2 = number_1 + 1;
		while (number_2 < 100)
		{		
			writenumbers(n1_a, n1_b, number_2);
			if (number_1 == 98)
				return ;
			write(1, ", ", 2);
			number_2++;
		}
		number_1++;
	}
}
