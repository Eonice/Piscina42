/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:57:00 by dmiralle          #+#    #+#             */
/*   Updated: 2023/02/12 17:35:00 by dmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			j = tab[i];
			tab[i] = tab [i + 1];
			tab[i + 1] = j;
			i = 0;
		}
		else
			++i;
	}
}
/*
int	main(void)
{
	int	arrayun[] = {22,5,7,40,2,5,8,12,16,11};
	int	size;
	int z;

	size = 10;
	z = 0;
	ft_sort_int_tab(arrayun, size);
	while (z < size)
	{
		printf("%d\t", arrayun[z]);
		z++;
	}
		return (0);
}*/
