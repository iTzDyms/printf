/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putonbr_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheron <cheron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 15:03:19 by cheron            #+#    #+#             */
/*   Updated: 2013/12/18 16:19:43 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_printf(char c, int *len);

void	ft_putonbr_printf(unsigned int n, int *len)
{
	if (n / 8 > 0)
		ft_putonbr_printf(n / 8, len);
	ft_putchar_printf((n % 8) + '0', len);
}
