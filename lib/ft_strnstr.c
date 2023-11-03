/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: az0100 <az0100@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:38:47 by ahamou            #+#    #+#             */
/*   Updated: 2023/11/03 06:19:28 by az0100           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (len)
	{
		while (i < len && (char )haystack[i])
		{
			j = 0;
			if ((char )haystack[i] == (char )needle[0])
			{
				while ((char )haystack[i + j] == (char )needle[j]
					&& i + j < len)
				{
					if ((char )needle[j + 1] == '\0')
						return ((char *)haystack + i);
					j++;
				}
			}
			i++;
		}
	}
	return (0);
}
