/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:59:34 by rlamtaou          #+#    #+#             */
/*   Updated: 2023/11/16 21:34:37 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		count;

	count = 0;
	while (s[count])
		count++;
	str = malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	count = 0;
	while (s[count])
	{
		str[count] = s[count];
		count++;
	}
	str[count] = '\0';
	return (str);
}
