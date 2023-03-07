/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 23:14:58 by dmiralle          #+#    #+#             */
/*   Updated: 2023/02/15 13:51:14 by dmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
				i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
			   
{
	char	alphabet[] = "abcdefghi";

	ft_str_is_alpha(alphabet);
	printf("%d", ft_str_is_alpha(alphabet));

printf("\n");
	char	number[] = "12285";

	ft_str_is_alpha(number);
	printf("%d", ft_str_is_alpha(number));	
	return (0);
}*/
