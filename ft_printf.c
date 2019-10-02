/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 07:48:54 by lelee             #+#    #+#             */
/*   Updated: 2019/10/02 07:29:43 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		printf(char const *fmt, ...)
{
	int ret;
	va_list ap;

	va_start(ap, fmt);
	ret = checker(fmt, ap);
	va_end(ap);
	return (ret);
}
