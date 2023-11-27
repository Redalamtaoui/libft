/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:12:57 by rlamtaou          #+#    #+#             */
/*   Updated: 2023/11/25 13:50:55 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	x;

	x = 0;
	if (!s && n == 0)
		return (0);
	while (x < n)
	{
		((unsigned char *)s)[x] = (unsigned char)c;
		x++;
	}
	return (s);
}
