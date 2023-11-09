/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:47:15 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/09 17:16:40 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		result;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			result = ft_prints(*(str + 1), args, &count);
			if (result == 0)
				return (-1);
			else if (result == 1)
				str += 2;
			else
				str++;
			continue ;
		}
		if (!ft_putchar(*str, &count))
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
	//fclose(stdout);
    
	printf(" %d\n", ft_printf("Hello %s World", (char *)NULL));
	printf(" %d\n", printf("Hello %s World", (char *)NULL));
    
    //fprintf(stderr, "%d %d\n", printf("Hek"), ft_printf("Hek"));
}*/
