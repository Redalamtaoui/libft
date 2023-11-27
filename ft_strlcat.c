/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:38:33 by rlamtaou          #+#    #+#             */
/*   Updated: 2023/11/17 22:31:30 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	x;

	x = 0;
	if (!dst && !size)
		return (ft_strlen(src));
	dest_len = ft_strlen(dst);
	if (size <= dest_len)
		return (ft_strlen(src) + size);
	while (src[x] && (dest_len + x) < (size - 1))
	{
		dst[dest_len + x] = src[x];
		x++;
	}
	dst[dest_len + x] = '\0';
	return (ft_strlen(src) + dest_len);
}
