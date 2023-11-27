/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:24:30 by rlamtaou          #+#    #+#             */
/*   Updated: 2023/11/25 14:21:12 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;
	size_t	little_len;

	x = 0;
	y = 0;
	little_len = ft_strlen(little);
	if (!big && !len)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	while (big[x] && little_len <= len - x)
	{
		y = 0;
		while (big[x + y] == little[y] && little[y])
			y++;
		if (little_len == y)
			return ((char *)big + x);
		x++;
	}
	return (NULL);
}
