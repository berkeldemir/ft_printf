/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:48:45 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/27 18:28:58 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base(unsigned long num, char *ref)
{
	int count;

	count = 0;
	if (num >= 16)
		count += ft_base(num / 16, ref);
	count += ft_print_c(ref[num % 16]);
	return (count);
}
