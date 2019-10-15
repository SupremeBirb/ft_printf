/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmtstring.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:35:24 by lelee             #+#    #+#             */
/*   Updated: 2019/10/14 19:32:48 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	chkfmt(checker **format)
{
	format['f'] = f_check;
	format['d'] = d_check;
	format['c'] = c_check;
	format['s'] = s_check;
	format['x'] = x_check;
	format['X'] = X_check;
	format['u'] = u_check;
	format['e'] = e_check;
	format['E'] = E_check;
	format['g'] = g_check;
	format['G'] = G_check;
	format['p'] = p_check;
	format['n'] = n_check;
	format['%'] = percent_check;
	format['.'] = dot_check;
}

int	fmtstring(char const *fmt, va_list ap)
{
	char *f = fmt;
	checker *format[15];

	chkfmt(format);
	while (*f != '%')
	{
		ft_putchar(f);
		f++;
	}
}

int main()
{
	
}