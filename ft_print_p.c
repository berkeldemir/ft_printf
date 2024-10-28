/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:31:35 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/28 07:55:24 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(void *ptr)
{
	int	count;

	if (!ptr)
		return (ft_print_s(NULLPOINTER));
	count = ft_print_s("0x");
	count += ft_base((unsigned long)ptr, HEXADOWN);
	return (count);
}
