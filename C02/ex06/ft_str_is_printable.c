/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zest <zest@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 00:03:28 by zest              #+#    #+#             */
/*   Updated: 2023/02/08 00:03:31 by zest             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	counter;

	counter = 0;
	if (str[counter] != '\0')
	{
		return (1);
	}
	while (str[counter] != '\0')
	{
		if ((str[counter] <= '~') && (str[counter] >= ' '))
			counter ++;
		else
			return (0);
	}
	return (1);
}
