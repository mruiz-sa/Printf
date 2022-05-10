/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:25:38 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/05/09 12:32:59 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_x_p(unsigned long int num, const char format, int *len)
{
	if (num >= 16)
	{
		ft_print_x_p(num / 16, format, len);
		ft_print_x_p(num % 16, format, len);
	}
	else
	{
		if (num <= 9)
			ft_print_c(num + 48, len);
		else
		{
			if (format == 'x' || format == 'p')
				ft_print_c((num - 10 + 'a'), len);
			if (format == 'X')
				ft_print_c((num - 10 + 'A'), len);
		}
	}
}
