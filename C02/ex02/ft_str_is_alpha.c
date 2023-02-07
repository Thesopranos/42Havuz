/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mertcaki <mertcaki@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:23:01 by mertcaki          #+#    #+#             */
/*   Updated: 2023/02/07 12:23:06 by mertcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		else if ((str[counter] <= 'z') && (str[counter] >= 'a'))
			counter ++;
		else
			return (0);
	}
	return (1);
}
