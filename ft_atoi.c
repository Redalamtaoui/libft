/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:53:02 by rlamtaou          #+#    #+#             */
/*   Updated: 2023/11/24 01:29:30 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sum;

	sum = 0;
	i = 1;
	while ((*nptr == 32) || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			i = -i;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		sum = (sum * 10) + *nptr - 48;
		nptr++;
	}
	return (sum * i);
}
