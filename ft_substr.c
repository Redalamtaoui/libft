/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:57:24 by rlamtaou          #+#    #+#             */
/*   Updated: 2023/11/19 03:00:20 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	src_len;
	size_t	x;

	x = 0;
	if (!s)
		return (NULL);
	src_len = ft_strlen(s);
	if (src_len <= start)
	{
		ptr = ft_calloc(1, sizeof(char));
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	if ((start + len) > src_len)
		len = src_len - start;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (x < len && s[start] != '\0')
		ptr[x++] = s[start++];
	ptr[x] = '\0';
	return (ptr);
}
