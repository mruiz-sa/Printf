/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:56:44 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/05/07 13:14:40 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_u(unsigned int n, int *len)
{
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
