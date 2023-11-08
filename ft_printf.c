/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:47:15 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/08 18:02:55 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		*pcount;
	int		result;

	count = 0;
	pcount = &count;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			result = ft_prints(*(str + 1), args, pcount);
			if (!result)
				return (-1);
			else
				str += 2;
			continue ;
		}
		if (!ft_putchar(*str, pcount))
			return (-1);
		str++;
	}
	va_end(args);
	return (count);
}
/*
#include <stdio.h>

int main()
{
	int i = ft_printf("%p\n", "");
	int j = printf("%p\n", "");
    printf("ft%d\n", i);
	printf("%d\n", j);
	//printf("     %d\n", ft_printf("%d   %d", 15));
	//printf("     %d\n", printf("%d   %d", 15));
	//printf("count : %d\n", ft_printf("% % % % % % % % %"));
}*/
