/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judehon <judehon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:07:18 by judehon           #+#    #+#             */
/*   Updated: 2025/10/23 17:40:34 by judehon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>


void	ft_putstr(char *str);
void	ft_putnbr(unsigned int nb);
void	ft_putchar(char c);
int		ft_printf(const char *s, ...);

#endif