/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheron <cheron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 16:31:41 by cheron            #+#    #+#             */
/*   Updated: 2013/12/18 18:55:21 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <ft_printf.h>

static void		ft_call(char c, va_list ap, int *len);

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	int			len;
	size_t		i;

	i = 0;
	va_start(ap, format);
	len = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			ft_call(format[i + 1], ap, &len);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			len++;
		}
		i++;
	}
	va_end(ap);
	return (len);
}

static void		ft_call(char c, va_list ap, int *len)
{
	if (c == 'd')
		ft_putnbr_printf(va_arg(ap, int), len);
	else if (c == 'u')
		ft_putunbr_printf(va_arg(ap, unsigned int), len);
	else if (c == 'x')
		ft_putxnbr_printf(va_arg(ap, unsigned int), len);
	else if (c == 'o')
		ft_putonbr_printf(va_arg(ap, unsigned int), len);
	else if (c == 'p')
		ft_putpaddress_printf(va_arg(ap, void *), len);
	else if (c == 's')
		ft_putstr_printf(va_arg(ap, char *), len);
	else if (c == 'c')
		ft_putchar_printf(va_arg(ap, int), len);
	else if (c == 'i')
		ft_putnbr_printf(va_arg(ap, int), len);
}
