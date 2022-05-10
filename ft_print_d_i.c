/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 20:18:17 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/05/09 12:07:53 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_d_i(int n, int *len)
{
	if (n == -2147483648)
		*len = *len + write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			ft_print_c('-', len);
			n = n * -1;
		}
		if (n < 10)
		{
			ft_print_c(n + 48, len);
		}
		else
		{
			ft_print_u(n / 10, len);
			ft_print_u(n % 10, len);
		}
	}
}
