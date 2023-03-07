/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:59:10 by dmiralle          #+#    #+#             */
/*   Updated: 2023/02/15 13:50:49 by dmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char	src[] = "Hola";
	char	dest[] = "Munnnndo";
	char	dest1[] = "Munnnndo";

	printf("%s", ft_strncpy(dest, src, 3));
	printf("\n%s", ft_strncpy(dest1, src, 3));
	printf("\n%s", ft_strncpy(dest, src, 5));
	printf("\n%s", ft_strncpy(dest1, src, 5));
	printf("\n%s", ft_strncpy(dest, src, 7));
	printf("\n%s", ft_strncpy(dest1, src, 7));
}*/
