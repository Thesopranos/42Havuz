/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mertcaki <mertcaki@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:15:19 by mertcaki          #+#    #+#             */
/*   Updated: 2023/02/17 18:15:20 by mertcaki         ###   ########.fr       */
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

	counter = 0;
	while (argv[0][counter] != '\0' && argc)
	{
		ft_putchar(argv[0][counter]);
		++counter;
	}
	ft_putchar('\n');
	return (0);
}
