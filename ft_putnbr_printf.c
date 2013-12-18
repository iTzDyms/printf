/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheron <cheron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:42:42 by cheron            #+#    #+#             */
/*   Updated: 2013/12/18 14:05:13 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ft_printf.h>

void	ft_putchar_printf(char c, int *len);


void	ft_putnbr_printf(int n, int *len)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*len += 11;
		return ;
	}
	if (n < 0)
	{
		n = - n;
		write (1, "-", 1);
		*len = *len + 1;
	}
	if (n / 10 > 0)
		ft_putnbr_printf(n / 10, len);
	ft_putchar_printf((n % 10) + '0', len);
}
