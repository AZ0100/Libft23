/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: az0100 <az0100@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 03:04:25 by ahamou            #+#    #+#             */
/*   Updated: 2023/11/03 06:19:39 by az0100           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	long long	i;
	long long	j;
	char		*a;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (ft_strchr((char *) set, s1[i]))
		i++;
	while (ft_strchr((char *) set, s1[j]))
		j--;
	if (j < i)
		return (ft_strdup(""));
	a = malloc (j - i + 2);
	if (!a)
		return (NULL);
	ft_strlcpy(a, s1 + i, j - i + 2);
	return (a);
}
