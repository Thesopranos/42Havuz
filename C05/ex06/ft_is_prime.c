/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mertcaki <mertcaki@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:21:35 by mertcaki          #+#    #+#             */
/*   Updated: 2023/02/17 11:21:36 by mertcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	counter;

	counter = 2;
	if (nb <= 1)
		return (0);
	while (counter <= (nb / 2))
	{
		if (nb % counter == 0)
			return (0);
		else
			counter += 1;
	}
	return (1);
}
