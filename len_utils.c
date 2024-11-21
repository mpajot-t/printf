/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpajot-t <mpajot-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:25:55 by mpajot-t          #+#    #+#             */
/*   Updated: 2024/11/21 10:26:25 by mpajot-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_intlen(int a)
{
	int	i;

	i = 0;
	if (a < 0)
	{
		a = -a;
		i++;
	}
	if (a == 0)
		return (1);
	while (a > 0)
	{
		a /= 10;
		i++;
	}
	return (i);
}

size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}