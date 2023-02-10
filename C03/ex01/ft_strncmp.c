/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zest <zest@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:26:05 by zest              #+#    #+#             */
/*   Updated: 2023/02/09 23:26:07 by zest             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	ctr;

	ctr = 0;
	while ((s1[ctr] != '\0' || s2[ctr] != '\0') && ctr < n)
	{
		if (s1[ctr] > s2[ctr])
			return (1);
		else if (s1[ctr] < s2[ctr])
			return (-1);
		ctr ++;
	}
	return (0);
}
