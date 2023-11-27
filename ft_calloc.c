/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:53:32 by rlamtaou          #+#    #+#             */
/*   Updated: 2023/11/25 14:21:29 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	total = (nmemb * size);
	if (size && (total / size) != (nmemb))
		return (NULL);
	if (total == 0)
		return (ft_strdup(""));
	else
	{
		ptr = malloc(total);
		if (!ptr)
			return (NULL);
		ft_bzero(ptr, total);
	}
	return (ptr);
}
