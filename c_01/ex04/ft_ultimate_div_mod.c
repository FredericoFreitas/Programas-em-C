/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhallamm <fhallamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 07:39:05 by fhallamm          #+#    #+#             */
/*   Updated: 2022/08/16 13:48:11 by fhallamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main(void)
//{
//	int	a;
//	int	b;
//
//
//	a = 20;
//	b = 10;
//	ft_ultimate_div_mod(&a, &b);
//	write(1, &a, 2);
//	write(1, &b, 2);
//}
