/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zest <zest@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:54:38 by zest              #+#    #+#             */
/*   Updated: 2023/02/09 22:54:39 by zest             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (ft_char_is_printable(str[counter]) == 1)
			ft_putchar(str[counter]);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[counter] / 16]);
			ft_putchar("0123456789abcdef"[str[counter] % 16]);
		}
		counter ++;
	}
}
