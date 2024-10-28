/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:24:49 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/28 03:50:48 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned long n, const char c)
{
	if (c == 'x')
		return (ft_base(n, HEXADOWN));
	if (c == 'X')
		return (ft_base(n, HEXAUP));
	return (0);
}
