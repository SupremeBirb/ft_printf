/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potatobirb <potatobirb@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 12:30:37 by potatobirb        #+#    #+#             */
/*   Updated: 2019/10/02 06:40:14 by potatobirb       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ftoa(n, res, afterpoint)
**	n --> Input Number
**	res[] --> Array where output string is stored
**	afterpoint --> Number of digits to be considered after point.
**
**	For example ftoa(1.555, str, 2) should store "1.55" in res and
**	ftoa(1.55, str, 0) should store "1" in res.
*/

#include "ft_printf.h"

void ftoa(float n, char *res, int afterpoint)
{
	int ipart;
	float fpart;
	
	ipart = (int)n;
	fpart= n - (float)ipart;
	res = ft_itoa(ipart);
	printf("res after itoa: %s\n", res);
		
}

int main(void)
{
	char *res;

	res = ft_strnew(1);
	ftoa(4323.324, res, 3);
}