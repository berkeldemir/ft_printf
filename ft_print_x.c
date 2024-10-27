/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:24:49 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/27 21:10:55 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_x(int n, const char c)
{
	if (c == 'x')
		return (ft_base(n, "0123456789abcdef"));
	if (c == 'X')
		return (ft_base(n, "0123456789ABCDEF"));
	return (0);
}
