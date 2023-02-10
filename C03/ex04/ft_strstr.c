/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zest <zest@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 00:49:43 by zest              #+#    #+#             */
/*   Updated: 2023/02/10 00:49:44 by zest             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	str_ctr;
	int	find_ctr;

	str_ctr = 0;
	find_ctr = 0;
	if (to_find[find_ctr] == '\0')
		return (str);
	while (str[str_ctr] != '\0')
	{
		while (str[str_ctr + find_ctr] == to_find[find_ctr]
			&& str[str_ctr + find_ctr] != '\0')
			find_ctr ++;
		if (to_find[find_ctr] == '\0')
			return (str + str_ctr);
		str_ctr ++;
		find_ctr = 0;
	}
	return (0);
}
