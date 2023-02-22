/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mertcaki <mertcaki@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:47:42 by mertcaki          #+#    #+#             */
/*   Updated: 2023/02/22 05:12:46 by mertcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	range;
	int	counter;

	counter = 0;
	range = max - min;
	if (min >= max)
		return (0);
	tab = (int *) malloc(range * sizeof(int));
	if (tab == NULL)
		return (0);
	while (counter < range)
	{
		tab[counter] = min + counter;
		counter ++;
	}
	return (tab);
}
