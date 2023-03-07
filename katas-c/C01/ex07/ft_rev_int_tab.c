/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:34:18 by dmiralle          #+#    #+#             */
/*   Updated: 2023/02/12 17:20:28 by dmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swap;
		i++;
	}
}
/*
int    main(void)
{
    int pepino[] = {1, 2, 3, 4};
    int    peras_limoneras = 4;
    ft_rev_int_tab(pepino, peras_limoneras);
     int    i;

    i = 0;
    while (i < peras_limoneras)
    {
     printf("nuevo array %d", pepino[i] );
     i++;
    }

    return (0);

}*/
