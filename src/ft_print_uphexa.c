/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uphexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shapetit <shapetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:20:37 by shapetit          #+#    #+#             */
/*   Updated: 2025/11/14 15:27:33 by shapetit         ###   ########.fr       */
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

int	ft_print_uphexa(unsigned int n)
{
	char		*hex;
	char		res;
	int			i;

	i = ft_hexa_len(n);
	hex = "0123456789ABCDEF";
	if (n > 16)
		ft_print_uphexa(n / 16);
	res = hex[n % 16];
	write (1, &res, 1);
	return (i);
}
