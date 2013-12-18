/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthnbr_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheron <cheron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 15:32:06 by cheron            #+#    #+#             */
/*   Updated: 2013/12/18 18:40:15 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ft_printf.h>

void	ft_putxnbr_printf(unsigned int n, int *len)
{
	if (n / 16 > 0)
		ft_putxnbr_printf(n / 16, len);
	if (n % 16 < 10)
		ft_putchar_printf((n % 16) + '0', len);
	else
		ft_putchar_printf(((n % 16) - 10) + 'a', len);
}

