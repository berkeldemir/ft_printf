/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_additionalfuncts.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:25:28 by beldemir          #+#    #+#             */
/*   Updated: 2024/11/05 10:27:27 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_atoiforprintf(char *str)
{
	long	i;
	long	num;

	i = 0;
	num = 0;
	while (str[i] != '\0' && ft_isdigit(str[i]) == 1)
		num = (num * 10) + (str[i] - 48);
	return (num);
}
