/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mertcaki <mertcaki@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:32:20 by mertcaki          #+#    #+#             */
/*   Updated: 2023/02/18 15:42:25 by mertcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		size;
	int		counter;

	size = ft_strlen(src);
	str = (char *) malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	counter = 0;
	while (src[counter])
	{
		str[counter] = src[counter];
		counter ++;
	}
	str[counter] = '\0';
	return (str);
}
