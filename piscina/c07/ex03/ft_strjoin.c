/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabal-m <mzabal-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:37:25 by mzabal-m          #+#    #+#             */
/*   Updated: 2024/11/07 13:01:48 by mzabal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		ft_strlen(char *str);

int		get_len(int size, char **strs, char *sep);

char	*ft_strcat(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concatenated;
	int		i;
	int		len;

	len = get_len(size, strs, sep) + 1;
	concatenated = malloc(sizeof(char) * len);
	*concatenated = 0;
	if (!concatenated)
		return (0);
	i = -1;
	while (++i < size)
	{
		ft_strcat(concatenated, strs[i]);
		if (i < size - 1)
			ft_strcat(concatenated, sep);
	}
	return (concatenated);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	get_len(int size, char **strs, char *sep)
{
	int	i;
	int	sep_len;
	int	len;

	i = 0;
	len = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += sep_len;
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_start);
}
