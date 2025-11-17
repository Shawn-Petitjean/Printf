/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shapetit <shapetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:11:29 by shapetit          #+#    #+#             */
/*   Updated: 2025/11/17 10:02:30 by shapetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	ft_print_str(char *ap)
{
	int	i;

	i = 0;
	if (!ap)
		return (write(2, "(null)", 6), 6);
	while (ap[i])
	{
		write(1, &ap[i], 1);
		i++;
	}
	return (i);
}

int	ft_print_c(int c)
{
	write (1, &c, 1);
	return (1);
}
