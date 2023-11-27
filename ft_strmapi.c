/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:26:38 by rlamtaou          #+#    #+#             */
/*   Updated: 2023/11/19 00:17:19 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		size_s;
	unsigned int		x;
	char				*str;

	if (!s || !f)
		return (NULL);
	x = 0;
	size_s = ft_strlen(s);
	str = malloc((size_s + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[x])
	{
		str[x] = f(x, s[x]);
		x++;
	}
	str[x] = '\0';
	return (str);
}
