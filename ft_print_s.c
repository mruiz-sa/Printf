/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:07:42 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/05/09 11:31:55 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_s(char *str, int *len)
{
	int	i;

	i = 0;
	if (!str)
		*len = *len + write(1, "(null)", 6);
	else
	{
		while (str[i])
		{
			*len = *len + write(1, &str[i], 1);
			i++;
		}
	}
}
