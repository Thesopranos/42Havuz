/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zest <zest@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 00:19:58 by zest              #+#    #+#             */
/*   Updated: 2023/02/08 00:19:59 by zest             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] <= 'Z') && (str[counter] >= 'A'))
			str[counter] += 32;
		counter ++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	counter;
	int	word_status;

	word_status = 0;
	counter = 0;
	ft_strlowcase(str);
	while (str[counter] >= 'a' && str[counter] <= 'z')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			if (counter == 0)
				str[counter] -= 32;
			else if (word_status == 1)
				str[counter] -= 32;
				word_status = 0;
		}
		else if (str[counter] >= '0' && str[counter] <= '9')
			word_status = 0;
		else
			word_status = 1;
		counter ++;
	}
	return (str);
}
