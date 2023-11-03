/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: az0100 <az0100@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:25:56 by ahamou            #+#    #+#             */
/*   Updated: 2023/11/03 06:17:36 by az0100           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	l;
	size_t			i;

	str = (unsigned char *)s;
	l = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == l)
			return (str + i);
		i++;
	}
	return (0);
}
