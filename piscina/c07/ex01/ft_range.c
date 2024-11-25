/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabal-m <mzabal-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:39:02 by mzabal-m          #+#    #+#             */
/*   Updated: 2024/11/08 09:06:50 by mzabal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*array;
	int		size;
	int		i;

	size = max - min;
	if (size < 0 || max <= min)
		return (NULL);
	array = malloc(sizeof(int) * size);
	i = -1;
	while (++i < size)
		array[i] = min + i;
	array[i] = '\0';
	return (array);
}
