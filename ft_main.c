/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 07:08:36 by beldemir          #+#    #+#             */
/*   Updated: 2024/11/02 18:18:00 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	unsigned int	i;
	char			*str;

	i = 1245;
	str = "b";
	printf("%cx%cx%cx\n", '0', 0, '1');
	ft_printf("%cx%cx%cx\n", '0', 0, '1');
	ft_printf("-\n-\n-\n");
	//printf("a%  1s a\n", "");
	ft_printf("a%  1s a", "");
}
