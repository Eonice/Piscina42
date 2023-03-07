/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:04:16 by dmiralle          #+#    #+#             */
/*   Updated: 2023/02/07 16:51:18 by dmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_numbers(void)
{
	int		a;

	a = '0';
	while (a <= '9' )
	{
		write(1, &a, 1);
		a++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
