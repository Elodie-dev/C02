/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:26:41 by ede-cola          #+#    #+#             */
/*   Updated: 2023/09/13 13:31:41 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 90 && str[i] >= 65) || (str[i] >= 97 && str[i] <= 122))
		{
			if (str[i] <= 90 && str[i] >= 65)
				str[i] = str[i] + 32;
			if (i == 0)
				str[i] = str[i] - 32;
			else if (str[i - 1] < 48 || (str[i - 1] > 57 && str[i - 1] < 65))
				str[i] = str[i] - 32;
			else if ((str[i - 1] > 90 && str[i - 1] < 96) || str[i - 1] > 122)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
