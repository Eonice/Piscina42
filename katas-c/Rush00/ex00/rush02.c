/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:31:15 by dmiralle          #+#    #+#             */
/*   Updated: 2023/02/05 11:46:51 by dmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	horizontal(char c1, char c2, char c3, int x);
void	vertical(char cb, int x, int y);

void	rush(int x, int y)
{
	if (y >= 1)
	{
		horizontal('A', 'B', 'A', x);
		if (y >= 2)
		{
			if (y >= 3)
			{
				vertical('B', x, y);
			}
			horizontal('C', 'B', 'C', x);
		}	
	}
}

void	horizontal(char c1, char c2, char c3, int x)
{
	int	count;

	count = 0;
	if (x >= 1)
	{
		ft_putchar(c1);
		if (x >= 2)
		{
			if (x >= 3)
			{
				while (count < (x - 2))
				{
					ft_putchar(c2);
					count ++;
				}	
			}
			ft_putchar(c3);
		}
		ft_putchar('\n');
	}
}

void	vertical(char cb, int x, int y)
{
	int	count;
	int	spaces;

	count = 0;
	if (x >= 1)
	{
		while (count++ < (y - 2))
		{
			ft_putchar(cb);
			if (x >= 2)
			{
				if (x >= 3)
				{
					spaces = 0;
					while (spaces++ < (x - 2))
					{
						ft_putchar(' ');
					}
				}
				ft_putchar(cb);
			}	
			ft_putchar('\n');
		}
	}
}
