/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabal-m <mzabal-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:57:45 by mzabal-m          #+#    #+#             */
/*   Updated: 2024/10/30 08:41:11 by mzabal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}
/*int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}
	printf("%d\n", ft_str_is_printable(argv[1]));
	return 0;
}*/
