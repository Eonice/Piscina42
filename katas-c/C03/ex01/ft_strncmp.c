/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:54:36 by dmiralle          #+#    #+#             */
/*   Updated: 2023/02/19 17:12:42 by dmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]) && i < n)
	{
		i++;
	}
	while ((s1[i] != s2[i]) && (i < n))
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_strncmp("Hola", "HolaMundo", 7);
}
*/
