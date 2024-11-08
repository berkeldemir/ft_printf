/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 07:08:36 by beldemir          #+#    #+#             */
/*   Updated: 2024/11/07 16:52:20 by beldemir         ###   ########.fr       */
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
	//printf("\nprevious return val: %d\n", printf("0%12s0", "beldemir"));
	//ft_printf("-\n-\n-\n");
	//printf("a%  1s a\n", "");
	//ft_printf("a%  1s a", "");
	printf("\n----------main----------\n");
    printf("%x\n");
    ft_printf("%x\n");
}
