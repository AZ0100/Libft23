/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: az0100 <az0100@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:25:23 by ahamou            #+#    #+#             */
/*   Updated: 2023/11/03 06:18:27 by az0100           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
