/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mertcaki <mertcaki@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:38:14 by mertcaki          #+#    #+#             */
/*   Updated: 2023/02/17 18:38:15 by mertcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	counter;
	int	counter_in;

	counter = argc - 1;
	while (counter > 0)
	{
		counter_in = 0;
		while (argv[counter][counter_in] != '\0' && argc)
		{
			ft_putchar(argv[counter][counter_in]);
			counter_in++;
		}
		ft_putchar('\n');
		counter--;
	}
	return (0);
}
