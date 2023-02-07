/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mertcaki <mertcaki@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:35:59 by mertcaki          #+#    #+#             */
/*   Updated: 2023/02/07 12:36:00 by mertcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	counter;

	counter = 0;
	if (str[counter] == '\0')
	{
		return (1);
	}
	while (str[counter] != '\0')
	{
		if ((str[counter] <= 'Z') && (str[counter] >= 'A'))
			counter ++;
		else
			return (0);
	}
	return (1);
}
