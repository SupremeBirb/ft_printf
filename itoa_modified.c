/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_modified.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potatobirb <potatobirb@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 12:30:42 by potatobirb        #+#    #+#             */
/*   Updated: 2019/10/01 12:30:43 by potatobirb       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		check;
	int		sign;

	// if (n == -2147483648)
	// 	return (ft_strdup("-2147483648"));
	check = n;
	len = 2;
	sign = n < 0 ? 1 : 0;
	check = n < 0 ? -n : n;
	len = ft_num_digits(len, check);
	sign == 1 ? len++ : 0;
	if (!(res = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	res[--len] = '\0';
	while (len--) 
	{
		res[len] = check % 10 + '0';
		check = check / 10;
	}
	sign == 1 ? res[0] = '-' : 0;
	return (res);
}
