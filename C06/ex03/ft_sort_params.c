/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mertcaki <mertcaki@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:47:25 by mertcaki          #+#    #+#             */
/*   Updated: 2023/02/18 11:14:02 by mertcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		ft_putchar(str[counter++]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] != '\0' || s2[counter] != '\0')
	{
		if (s1[counter] == s2[counter])
			counter++;
		if (s1[counter] < s2[counter] || s1[counter] > s2[counter])
			return (s1[counter] - s2[counter]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int argc, char **argv)
{
	int		counter;
	int		counter_sort;

	counter_sort = 1;
	while (counter_sort < argc - 1)
	{
		counter = 1;
		while (counter < argc - 1)
		{
			if (ft_strcmp(argv[counter], argv[counter + 1]) > 0)
			{
				ft_swap(&argv[counter], &argv[counter + 1]);
			}
			counter++;
		}
		counter_sort++;
	}
	counter = 1;
	while (counter < argc)
	{
		ft_putstr(argv[counter]);
		ft_putchar('\n');
		counter++;
	}
	return (0);
}
