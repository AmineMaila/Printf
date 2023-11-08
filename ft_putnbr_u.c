/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:20:53 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/08 18:02:05 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_u(unsigned int n, int *pcount)
{
	if (n >= 10)
	{
		if (!ft_putnbr_u(n / 10, pcount))
			return (0);
	}
	if (!ft_putchar((n % 10) + '0', pcount))
		return (0);
	return (1);
}
