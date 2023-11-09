/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:00:38 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/09 15:56:58 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
int		ft_prints(char c, va_list args, int *pcount);
int		ft_printf(const char *str, ...);
int		ft_putchar(char c, int *pcount);
int		ft_putstr(char *s, int *pcount);
int		ft_putnbr(int n, int *pcount);
int		ft_putnbr_u(unsigned int n, int *pcount);
int		ft_putnbr_base(size_t nbr, char *base, int *pcount);

#endif
