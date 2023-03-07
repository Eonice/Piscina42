/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:26:51 by dmiralle          #+#    #+#             */
/*   Updated: 2023/02/15 13:53:35 by dmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
			i++;
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main()
{
	char	array[] = "wkveroibhvheórobhroi";

	ft_str_is_printable(array);
	printf("%d", ft_str_is_printable(array));
	return (0);
}*/
