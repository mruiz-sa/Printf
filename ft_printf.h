/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:38:07 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/05/10 10:48:04 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
int		ft_conversion(va_list agrs, const char format);
void	ft_print_c(int c, int *len);
void	ft_print_d_i(int n, int *len);
void	ft_print_s(char *str, int *len);
void	ft_print_u(unsigned int n, int *len);
void	ft_print_x_p(unsigned long int num, const char format, int *len);

#endif