/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shapetit <shapetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:03:53 by shapetit          #+#    #+#             */
/*   Updated: 2025/11/14 18:15:27 by shapetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	ft_next_print(va_list ap, char *s, int *i, int *size)
{
	if (s[*i] == '%' && s[*i +1] == 'p')
		return (ft_print(ap, s, i + 2, size + ft_print_voidp((long int)va_arg(ap, long int))));
	if (s[*i] == '%' && s[*i +1] == 'x')
		return (ft_print(ap, s, *i + 2, (*size -2) + ft_print_lohexa((unsigned int)va_arg(ap, unsigned int))));
		
	if (s[*i] == '%' && s[*i +1] == 'X')
		return (ft_print(ap, s, i + 2, (size -2) + ft_print_uphexa((unsigned int)va_arg(ap, unsigned int))));
	if (s[*i] == '%' && s[*i +1])
		return (write(1, "%", 1), ft_print(ap, s, i + 2, size -2));
	return (ft_print(ap, s, i, size));
}

int	ft_print(va_list ap, char *s, int *i, int *size)
{
	while (s[*i])
	{
		if (s[*i] == '%' && s[*i +1] == 's')
			return (ft_print(ap, s, i + 2, (size -2) + ft_print_str((char *)va_arg(ap, char *))));
		if (s[*i] == '%' && s[*i +1] == 'c')
			return (ft_print(ap, s, i + 2, (size -2) + ft_print_c((int)va_arg(ap, int))));
		if (s[*i] == '%' && (s[*i +1] == 'd' || s[*i +1] == 'i'))
			return (ft_print(ap, s, i + 2, (size -2) + ft_print_nbr((int)va_arg(ap, int))));
		if (s[*i] == '%' && s[*i +1] == 'u')
			return (ft_print(ap, s, i + 2, (size -2) + ft_print_nbr((unsigned int)va_arg(ap, unsigned int))));
		if (s[*i] == '%' && (s[*i +1] == 'p' || s[*i +1] == 'x' || s[*i +1] == 'X' || s[*i +1] == '%'))
			ft_next_print(ap, s, i, size);
		write(1, &s[(*i)++], 1);
	}
	return (*size += *i);
}

int	ft_printf(const char *s, ...)
{
	va_list	ar;
	int		i;
	int		size;

	size = 0;
	i = 0;
	va_start(ar, s);
	return (ft_print(ar, (char *) s, &i, &size));
}
