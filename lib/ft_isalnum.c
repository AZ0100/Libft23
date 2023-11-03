/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: az0100 <az0100@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:28:38 by ahamou            #+#    #+#             */
/*   Updated: 2023/11/03 06:15:41 by az0100           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int an)
{
	if ((an >= 48 && an <= 57) || (an >= 65 && an <= 90)
		|| (an >= 97 && an <= 122))
		return (1);
	else
		return (0);
}