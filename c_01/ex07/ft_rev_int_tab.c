/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhallamm <fhallamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:38:13 by fhallamm          #+#    #+#             */
/*   Updated: 2022/08/16 20:55:48 by fhallamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	aux = 0;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size - 1];
		tab[size -1 - i] = aux;
		i++;
	}
}

//int	main(void)
//{
//	int	i;
//	int	vetor[] = {1, 2, 3, 4, 5};
//	ft_rev_int_tab(vetor,5);
//	i = 0;
//	while (i < 5)
//	{
//		printf("%i ", vetor[i]);
//		i++;
//	}
//}
