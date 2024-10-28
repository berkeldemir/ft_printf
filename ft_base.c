/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:48:45 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/28 02:41:39 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base(unsigned long n, char *ref)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_base(n / 16, ref);
	count += ft_print_c(ref[n % 16]);
	return (count);
}
