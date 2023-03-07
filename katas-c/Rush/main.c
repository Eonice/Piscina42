/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saparici <saparici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:11:25 by saparici          #+#    #+#             */
/*   Updated: 2023/02/19 13:38:34 by saparici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int ft_check_arg(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!(argv[i] >= '0' && argv[i] < '9'))
			return (0);
		i++;
	}
	return (1);
}
/* Lee el fichero numbers.dict, busca el argumento en el dictado por medio de strfind */
void ft_ready(char *argv, int fd, char *dict)
{
	int i;
	char *buffer;

	i = 0;
	if (!(dict = (char *)malloc(5000)))
		return ;
	if ((fd = open("numbers.dict", O_RDONLY)) == -1)
	{
		write(1, "Error", sizeof("Error"));
		return ;
	}
	while (read(fd, &dict[i], 1))
		i++;
	if (close(fd) == -1)
	{
		write(1, "Error_close", sizeof("Error_close"));
		return;
	}
	if ((buffer = ft_strfind(dict, argv)) == 0)
		return;
	/*ft_print(buffer);*/
	
}

int	main(int argc, char **argv)
{
	int		fd;
	char	*dict;
/* comprobamos errores de argumentos*/
	if (argc > 3)
		write(1, "many_argument", sizeof("many_argument"));
	else if (argc == 2 )
	{
		if (ft_check_arg(argv[1]))
			ft_ready(argv[1], fd, dict);
			else
			write(1, "Invalid_argument", sizeof("Invalid_argument"));			
	}
free(dict)
return (0);
}

