/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:07:26 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/28 03:32:52 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	unsigned int	i;
	char			*str;

	i = 1245;
	str = "berk";
	printf("%s\n", str);
	ft_printf("%s", str);
}
