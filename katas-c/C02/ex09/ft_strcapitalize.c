/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 01:43:45 by dmiralle          #+#    #+#             */
/*   Updated: 2023/02/15 13:55:19 by dmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	z;

	i = 0;
	z = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (z == 1)
				str[i] -= 32;
			z = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			z = 0;
		else
			z = 1;
		i++;
	}
	return (str);
}
/*
 int	main()
{

	char	array[] = "salut, comment tu vas ? 42mots quaRante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(array));
	return (0);
}*/
