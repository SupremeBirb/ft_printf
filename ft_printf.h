/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 12:30:44 by potatobirb        #+#    #+#             */
/*   Updated: 2019/10/02 07:29:35 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h> 
# include <stdarg.h>
# include <stdio.h>


/*
** Function Dispatch Table
*/
typedef int checker(char const *fmt, va_list ap);

/*
** Printf Function
*/

int	ft_printf(char const *fmt, ...);	

/*
** Format CHeckers
*/

int f_check(char const *fmt, va_list ap);
int d_check(char const *fmt, va_list ap);
int c_check(char const *fmt, va_list ap);
int s_check(char const *fmt, va_list ap);
int x_check(char const *fmt, va_list ap);
int X_check(char const *fmt, va_list ap);
int u_check(char const *fmt, va_list ap);
int e_check(char const *fmt, va_list ap);
int E_check(char const *fmt, va_list ap);
int g_check(char const *fmt, va_list ap);
int G_check(char const *fmt, va_list ap);
int p_check(char const *fmt, va_list ap);
int n_check(char const *fmt, va_list ap);
int percent_check(char const *fmt, va_list ap);

/*
** Format Identifiers
*/

#endif