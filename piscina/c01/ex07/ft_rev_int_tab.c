/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabal-m <mzabal-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:14:02 by mzabal-m          #+#    #+#             */
/*   Updated: 2024/10/24 13:13:48 by mzabal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		n = tab[i];
		tab[i] = tab[size - 1 - i];
		tab [size - 1 - i] = n;
		i++;
	}
}
