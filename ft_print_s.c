/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:17:05 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/28 04:13:16 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(char *s)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (s == NULL)
		return (ft_print_s(NULLSTRING));
	while (s[i] != '\0')
	{
		count += ft_print_c(s[i]);
		i++;
	}
	return (count);
}
