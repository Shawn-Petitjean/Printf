/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lohexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shapetit <shapetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:10:51 by shapetit          #+#    #+#             */
/*   Updated: 2025/11/14 17:50:07 by shapetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_hexa_len(unsigned int n)
{
	int	i;

	i = 1;
	while (n >= 16)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

void	ft_convert_lohexa(unsigned int n)
{
	char		*hex;
	char		res;

	hex = "0123456789abcdef";
	if (n > 16)
		ft_convert_lohexa(n / 16);
	res = hex[n % 16];
	write (1, &res, 1);
}

int	ft_print_lohexa(unsigned int n)
{
	ft_convert_lohexa(n);
	return (ft_hexa_len(n));
}
