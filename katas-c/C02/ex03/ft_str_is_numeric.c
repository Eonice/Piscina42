/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:57:35 by dmiralle          #+#    #+#             */
/*   Updated: 2023/02/15 13:51:39 by dmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char	array[] = "";
	ft_sstr_is_numeric(array));
	printf("%d", ft_str_is_numeric(array));
	return (0);
}*/
