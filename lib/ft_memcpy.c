/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: az0100 <az0100@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:05:37 by ahamou            #+#    #+#             */
/*   Updated: 2023/11/03 06:17:46 by az0100           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destination;
	char	*source;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	destination = (char *)dest;
	source = (char *)src;
	i = 0;
	if (src == dest)
		return ((void *)destination);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
