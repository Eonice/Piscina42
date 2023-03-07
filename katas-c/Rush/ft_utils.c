/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saparici <saparici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:30:28 by saparici          #+#    #+#             */
/*   Updated: 2023/02/19 13:57:57 by saparici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char *ft_strfind(char *str, char *find)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i + j] == find[j])
    	{ /* si la string find no es nulo y si se tendia que comprobar que 
			caracteres hay despues si punto espacio. */
			return (0);
    	}
	}
    return (0);
}

int ft_is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\r'
			|| c == '\f');

}

int ft_is_number(char c)
{
	return (c >='0' && c <='9');
}

int ft_is_operator(char c)
{
	return (c == '-' || c =='+');
}

int ft_atoi(char *str)
{
	int i;
	int j;

	j = 1;
	while (ft_is_space(*str))
		str++;
	if (ft_is_operator(*str))
	{
		if (*str == '-')
			j *= -1;
		str++;
	}
	i = 0;
	while (ft_is_number(*str))
	{
		i *= 10;
		i += (*str) - 48;
		str++;
	}
	return (i * j);
}

int ft_atoint(char *str)
{
	int number;

	while (ft_is_space(*str))
		str++;
	number = 0;
	while (ft_is_number(*str))
	{
		number *=10;
		number +=(*str) - 48;
		str++;
	}
	if (*str =='\0')
		return (number);
	return (1);

}

