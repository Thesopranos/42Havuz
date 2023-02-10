/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zest <zest@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 00:37:20 by zest              #+#    #+#             */
/*   Updated: 2023/02/10 00:37:21 by zest             ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{	
	unsigned int	dest_ctr;
	unsigned int	src_ctr;

	src_ctr = 0;
	dest_ctr = ft_strlen(dest);
	while (src[src_ctr] != '\0' && src_ctr < nb)
	{
		dest[dest_ctr + src_ctr] = src[src_ctr];
		src_ctr ++;
	}
	dest[dest_ctr + src_ctr] = '\0';
	return (dest);
}
