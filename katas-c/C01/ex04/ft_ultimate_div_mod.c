/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:37:17 by dmiralle          #+#    #+#             */
/*   Updated: 2023/02/10 12:38:46 by dmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}
/*
#include <stdio.h>
int	main (void)
{
	int pepino;
	int pimiento;
	
	pepino = 10;
	pimiento = 5;
	ft_ultimate_div_mod(&pepino, &pimiento);
	printf("Resultado division %d\n", pepino);
	printf("Resultado modulo %d\n", pimiento);
}*/
