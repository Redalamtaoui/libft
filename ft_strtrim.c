/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:20:42 by rlamtaou          #+#    #+#             */
/*   Updated: 2023/11/15 18:28:44 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	ft_cheak(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*ptr;

	start = 0;
	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_cheak(s1[start], (char *)set) == 1)
		start++;
	if (start == ft_strlen(s1))
		return (ft_calloc(1, sizeof(char)));
	while (ft_cheak(s1[end], (char *)set) == 1)
		end--;
	ptr = malloc((end - start + 2) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (start <= end)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}
