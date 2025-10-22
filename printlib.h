/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printlib.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:07:18 by judehon           #+#    #+#             */
/*   Updated: 2025/10/22 18:36:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTLIB_H
# define PRINTLIB_H

# include <stdarg.h>
# include <unistd.h>


void	ft_putstr(char *str);
void	ft_putnbr(unsigned int nb);
void	ft_putchar(char c);
static int		ft_putnbrhex(unsigned int nb, char c);
int		ft_printf(const char *s, ...);

#endif