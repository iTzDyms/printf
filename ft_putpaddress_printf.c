/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpaddress.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheron <cheron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 16:15:53 by cheron            #+#    #+#             */
/*   Updated: 2013/12/18 18:57:45 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ft_printf.h>

static void	ft_printaddress(unsigned long int n, int *len);

void		ft_putpaddress_printf(void *ptr, int *len)
{
	unsigned long int	n;

	n = (char *)ptr - (char *)0;
	ft_putchar_printf('0', len);
	ft_putchar_printf('x', len);
	ft_printaddress(n, len);
}

static void	ft_printaddress(unsigned long int n, int *len)
{
	if (n / 16 > 0)
		ft_printaddress(n / 16, len);
	if (n % 16 < 10)
		ft_putchar_printf((n % 16) + '0', len);
	else
		ft_putchar_printf(((n % 16) - 10) + 'a', len);
}
