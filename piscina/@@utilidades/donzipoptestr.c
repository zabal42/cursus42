/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   donzipoptestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabal-m <mzabal-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:26:20 by mzabal-m          #+#    #+#             */
/*   Updated: 2024/11/05 17:14:49 by mzabal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		write (1, " ", 1);
		str++;
	}
}

int	main (int argc, char **argv)
{
	int	i;
	if (argc < 1 )
	{
		write (1, "introduzca mas de una cadena\n", 26);
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr (argv[i]);
		write (1, "\n", 1);
		i++;
	}

	return (0);
}
