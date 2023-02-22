/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mertcaki <mertcaki@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:50:53 by mertcaki          #+#    #+#             */
/*   Updated: 2023/02/22 04:04:16 by mertcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_str_length(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}

int	ft_compute_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	counter;

	final_length = 0;
	counter = 0;
	while (counter < size)
	{
		final_length += ft_str_length(strings[counter]);
		final_length += sep_length;
		counter++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		counter;
	char	*str_new;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_compute_final_length(strs, size, ft_str_length(sep));
	str_new = (char *)malloc((full_length + 1) * sizeof(char));
	d = str_new;
	if (!d)
		return (0);
	counter = 0;
	while (counter < size)
	{
		ft_strcpy(d, strs[counter]);
		d += ft_str_length(strs[counter]);
		if (counter < size - 1)
			ft_strcpy(d, sep);
		if (counter < size - 1)
			d += ft_str_length(sep);
		counter++;
	}
	*d = '\0';
	return (str_new);
}
