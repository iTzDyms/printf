/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheron <cheron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 16:37:55 by cheron            #+#    #+#             */
/*   Updated: 2013/12/18 18:41:19 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putnbr_printf(int nb, int *len);
void	ft_putunbr_printf(unsigned int nb, int *len);
void	ft_putonbr_printf(unsigned int n, int *len);
void	ft_putxnbr_printf(unsigned int n, int *len);
void	ft_putpaddress_printf(void *ptr, int *len);
void	ft_putstr_printf(char *str, int *len);
void	ft_putchar_printf(char c, int *len);



#endif
