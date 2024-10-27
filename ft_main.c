/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:07:26 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/27 21:11:56 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	unsigned int i;

	i = 1245;
	char	*s = "berk";
	printf("%s\n%u\n", s, i);
	ft_printf("%s\n%u\n", s, i);
}
