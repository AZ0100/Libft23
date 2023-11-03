/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: az0100 <az0100@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:17:19 by ahamou            #+#    #+#             */
/*   Updated: 2023/11/03 06:19:18 by az0100           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	slen;
	char	*st;

	if (!s || !f)
		return (NULL);
	i = 0;
	slen = ft_strlen(s) + 1;
	st = (char *)malloc(slen * sizeof(char));
	if (st == NULL)
		return (NULL);
	while (s[i])
	{
		st[i] = f(i, s[i]);
		i++;
	}
	st[i] = '\0';
	return (st);
}
