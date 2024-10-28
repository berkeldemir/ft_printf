/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:24:49 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/28 04:40:51 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned long n, const char c, int flag)
{
	int	count;

	count = 0;
	if (flag == 1)
	{
		if (c == 'X')
			count += ft_print_s("0X");
		else if (c == 'x')
			count += ft_print_s("0x");
	}
	if (c == 'x')
		count += (ft_base(n, HEXADOWN));
	else if (c == 'X')
		count += (ft_base(n, HEXAUP));
	return (count);
}
