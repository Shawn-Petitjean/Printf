/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shapetit <shapetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:34:15 by shapetit          #+#    #+#             */
/*   Updated: 2025/11/17 10:01:23 by shapetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H

# define PRINTF_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_print(va_list ap, char *s, int i, int size);
int		ft_printf(const char *s, ...);
int		ft_print_str(char *ap);
int		ft_print_c(int c);
int		ft_print_nbr(int n);
int		ft_print_voidp(long int n);
int		ft_print_uphexa(unsigned int n);
int		ft_print_lohexa(unsigned int n);
int		ft_print_unbr(unsigned int n);

#endif