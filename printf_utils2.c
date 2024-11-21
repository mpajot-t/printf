/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpajot-t <mpajot-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:35:41 by mpajot-t          #+#    #+#             */
/*   Updated: 2024/11/21 10:47:37 by mpajot-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	hexadecimal(int n)
{
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n >= 16)
		ft_putnbr_fd(n / 16);
	ft_putnbr_fd(n % 16);
		ft_putchar(n + '0');
	return (ft_intlen(n));
}
