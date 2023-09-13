/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:20:56 by ede-cola          #+#    #+#             */
/*   Updated: 2023/09/10 16:20:11 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] <= 90 && str[i] >= 65) || (str[i] <= 122 && str[i] >= 97))
			count++;
		i++;
	}
	if (count == i)
		return (1);
	else
		return (0);
}
