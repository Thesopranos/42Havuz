/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mertcaki <mertcaki@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:40:24 by mertcaki          #+#    #+#             */
/*   Updated: 2023/02/04 17:40:24 by mertcaki         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	left;
	int	mid;
	int	right;

	left = '0';
	while (left <= '7')
	{
		mid = left + 1;
		while (mid <= '8')
		{
			right = mid + 1;
			while (right <= '9')
			{
				write(1, &left, 1);
				write(1, &mid, 1);
				write(1, &right, 1);
				if (left != '7')
					write(1, ", ", 2);
				right ++;
			}
			mid ++;
		}
		left ++;
	}
}
