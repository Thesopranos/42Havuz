/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zest <zest@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 01:01:54 by zest              #+#    #+#             */
/*   Updated: 2023/02/10 01:01:55 by zest             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr] != '\0')
	{
		ctr ++;
	}
	return (ctr);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_ctr;
	unsigned int	dest_ctr;
	unsigned int	src_len;
	unsigned int	dest_len;

	src_ctr = 0;
	dest_ctr = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src[src_ctr] != '\0' && src_ctr < size - dest_len -1)
	{
		dest[dest_len + src_ctr] = src[src_ctr];
		src_ctr ++;
	}
	dest[dest_len + src_ctr] = '\0';
	return (dest_len + src_len);
}
