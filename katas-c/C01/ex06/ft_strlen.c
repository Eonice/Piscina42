/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:12:40 by dmiralle          #+#    #+#             */
/*   Updated: 2023/02/12 17:11:34 by dmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main()
{
	char	*c;
	int result;
	int	result2;

	char str [] = "Pollas en vinagre";
	c = "Hola";

	result2 = ft_strlen(str);
	result = ft_strlen(c);
	printf("%d", result);
	printf("%d", result2);
}*/
