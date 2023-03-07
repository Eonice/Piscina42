/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:25:41 by dmiralle          #+#    #+#             */
/*   Updated: 2023/02/15 13:52:56 by dmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char	array[] = "DSVSDB";
	ft_str_is_uppercase(array);
	printf("%d", ft_str_is_uppercase(array));
}
*/
