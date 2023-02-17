/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mertcaki <mertcaki@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:35:52 by mertcaki          #+#    #+#             */
/*   Updated: 2023/02/17 10:35:58 by mertcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;
	long	nb_copy;

	nb_copy = nb;
	if (nb_copy <= 0)
	{
		return (0);
	}
	if (nb_copy == 1)
	{
		return (1);
	}
	index = 2;
	if (nb_copy >= 2)
	{
		while (index * index <= nb_copy)
		{
			if (index * index == nb_copy)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}
