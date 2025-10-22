/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printlib.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judehon <judehon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:07:18 by judehon           #+#    #+#             */
/*   Updated: 2025/10/22 16:12:01 by judehon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTLIB_H
# define PRINTLIB_H
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

void	ft_putstr(char *str);
void	ft_putnbr(const char *str);
void	ft_putchar(char c);
void	ft_putnbrhex(unsigned int nb);
int		ft_printf(const char *s, ...);

#endif