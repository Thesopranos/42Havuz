/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zest <zest@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 00:30:41 by zest              #+#    #+#             */
/*   Updated: 2023/02/08 00:30:41 by zest             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter ++;
	}
	return (counter);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	counter = 0;
	if (size != 0)
	{
		while (src[counter] != '\0' && counter < size - 1)
		{
			dest[counter] = src[counter];
			counter ++;
		}
		dest[counter] = '\0';
	}
	return (src_len);
}
