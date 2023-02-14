/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mertcaki <mertcaki@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:09:54 by mertcaki          #+#    #+#             */
/*   Updated: 2023/02/14 15:09:55 by mertcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	spaces_counter(char *str)
{
	int	counter;

	counter = 0;
	while ((str[counter] >= 9 && str[counter] <= 13) || str[counter] == 32)
	{
		counter ++;
	}
	return (counter);
}

int	*sign(char *str)
{
	int	counter;

	positive = 1;
	counter = spaces_counter(str);
	while (str[counter] && (str[counter] == 43 || str[counter] == 45))
	{
		if (str[counter] == 45)
			positive *= -1;
		counter ++;
	}
	return (args);
}

int	counter_digit(char *str)
{
	int	int_sign;
	int	counter;

	int_sign = sign(str);
	counter = spaces_counter(str);
	while (str[counter] && (str[counter] == '+' || str[counter] == '-'
			|| str[counter] == 32))
	{
		counter ++;
	}
	if (!(str[counter] <= '9' && str[counter] >= '0'))
		return (-1);
	return (counter);
}

int	ft_atoi(char *str)
{
	int	int_sign;
	int	digit_counter;
	int	integ;

	integ = 0;
	int_sign = sign(str);
	digit_counter = counter_digit(str);
	if (digit_counter == -1)
		return (0);
	while (str[digit_counter] && str[digit_counter] <= '9'
		&& str[digit_counter] >= '0' )
	{
		integ *= 10;
		integ += str[digit_counter] - 48;
		digit_counter ++;
	}
	integ *= int_sign;
	return (integ);
}
