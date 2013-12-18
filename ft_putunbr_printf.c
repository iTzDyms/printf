/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheron <cheron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 14:04:20 by cheron            #+#    #+#             */
/*   Updated: 2013/12/18 15:33:32 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ft_printf.h>

void	ft_putchar_printf(char c, int *len);


void	ft_putunbr_printf(unsigned int n, int *len)
{
	if (n / 10 > 0)
		ft_putunbr_printf(n / 10, len);
	ft_putchar_printf((n % 10) + '0', len);
}
