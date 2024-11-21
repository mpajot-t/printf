/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpajot-t <mpajot-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:32:25 by mpajot-t          #+#    #+#             */
/*   Updated: 2024/11/21 10:32:34 by mpajot-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# define LHEXA "0123456789abcdefg"
# define UHEXA "0123456789ABCDEFG"
# include <stdlib.h>
# include <stdarg.h>

int ft_printf(const char *format, ...);
int	check_format(const char format, va_list args);
int	ft_putchar(char c);
int	ft_putstr(char *c);
int	hexaformat(void	*ptr);
void	ft_putnbr(int n);
int	ft_intlen(int a);

#endif