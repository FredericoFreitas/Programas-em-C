/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhallamm <fhallamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:49:16 by fhallamm          #+#    #+#             */
/*   Updated: 2022/08/24 15:31:57 by fhallamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	condicao(int nb)
{
	if (nb < 10)
	{
		print(nb + 48);
		return ;
	}
	else
	{
		condicao(nb / 10);
	}
	condicao(nb % 10);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		print('-');
		print('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		print('-');
		nb = nb * -1;
	}
	condicao(nb);
}
