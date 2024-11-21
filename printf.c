/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpajot-t <mpajot-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:32:22 by mpajot-t          #+#    #+#             */
/*   Updated: 2024/11/21 09:29:33 by mpajot-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	check_format(const char format, va_list args)
{
	
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int i;
	int	len;
	i = 0;
	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
			len = check_format(format[i + 1], args);
	}
}