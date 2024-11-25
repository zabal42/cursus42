/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabal-m <mzabal-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:33:03 by mzabal-m          #+#    #+#             */
/*   Updated: 2024/11/08 09:03:16 by mzabal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		size;
	char	*start;

	size = 0;
	while (src[size])
		size++;
	dup = malloc(sizeof(char) * (size + 1));
	if (dup == NULL)
		return (0);
	start = dup;
	while (dup++ = src++)
	{
		;
	}
	return (start);
}
