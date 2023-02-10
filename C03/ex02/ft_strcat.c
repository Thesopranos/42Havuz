/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zest <zest@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:33:45 by zest              #+#    #+#             */
/*   Updated: 2023/02/09 23:33:46 by zest             ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	dest_ctr;
	int	src_ctr;

	src_ctr = 0;
	dest_ctr = ft_strlen(dest);
	while (src[src_ctr] != '\0')
	{
		dest[dest_ctr + src_ctr] = src[src_ctr];
		src_ctr ++;
	}
	dest[dest_ctr + src_ctr] = '\0';
	return (dest);
}
