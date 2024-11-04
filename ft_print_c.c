/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:14:56 by beldemir          #+#    #+#             */
/*   Updated: 2024/11/02 18:21:29 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(int const c)
{
	int	count;

	if (c == 0)
		return (0);
	count = write(1, &c, 1);
	if (count == 1)
		return (1);
	return (-1);
}
