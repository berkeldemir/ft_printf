/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 07:08:36 by beldemir          #+#    #+#             */
/*   Updated: 2024/11/05 10:34:05 by beldemir         ###   ########.fr       */
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
	printf("previous return val: %d\n", printf("\001,\002,\007,\v,\010,\f,\r,\n"));
	printf("previous return val: %d\n", ft_printf("\001,\002,\007,\v,\010,\f,\r,\n"));
	ft_printf("-\n-\n-\n");
	//printf("a%  1s a\n", "");
	//ft_printf("a%  1s a", "");
}
