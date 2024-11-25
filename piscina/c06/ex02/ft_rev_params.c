/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabal-m <mzabal-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:22:57 by mzabal-m          #+#    #+#             */
/*   Updated: 2024/11/05 18:37:19 by mzabal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str++, 1);
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc -1;
	while (i != 0)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
		i--;
	}
	return (0);
}
