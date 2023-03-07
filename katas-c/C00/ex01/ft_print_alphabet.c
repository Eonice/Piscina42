/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmiralle <dmiralle@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:17:56 by dmiralle          #+#    #+#             */
/*   Updated: 2023/02/07 16:49:10 by dmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z' )
	{
		write(1, &c, 1);
		c++;
	}
}
/*
int	main(void)

{
	ft_print_alphabet();
	return (0);
}*/
