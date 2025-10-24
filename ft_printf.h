/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judehon <judehon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:07:18 by judehon           #+#    #+#             */
/*   Updated: 2025/10/24 11:35:12 by judehon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putstr(char *str);
int	ft_putnbr(long n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putchar(char c);
int	ft_printf(const char *s, ...);

#endif