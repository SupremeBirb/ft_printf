/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 12:30:37 by potatobirb        #+#    #+#             */
/*   Updated: 2019/10/02 09:25:13 by lelee            ###   ########.fr       */
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

double		power(double n, int afterpoint)
{
	int		i;
	double	temp;

	i = -1;
	temp = n;
	while (++i < afterpoint)
		n *= temp;
	return (n);
}

void		ftoa(float n, char *res, int afterpoint)
{
	int		ipart;
	float	fpart;

	ipart = (int)n;
	fpart = n - (float)ipart;
	fpart = fpart * power(10, afterpoint);
	res = ft_strcat(ft_strcat(ft_itoa(ipart), "."), ft_strncpy(res, ft_itoa(fpart), afterpoint));
	printf("fpart convert: %f\n", fpart);
	printf("res after itoa: %s\n", res);
}

int			main(void)
{
	char	*res;
	float	tst = 4323.3244;
	res = ft_strnew(1);
	ftoa(tst, res, 4);
}

// #include<stdio.h>
// #include<math.h>

// // reverses a string 'str' of length 'len'
// void reverse(char *str, int len)
// {
//     int i=0, j=len-1, temp;
//     while (i<j)
//     {
//         temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//         i++; j--;
//     }
// }

//  // Converts a given integer x to string str[].  d is the number
//  // of digits required in output. If d is more than the number
//  // of digits in x, then 0s are added at the beginning.
// int intToStr(int x, char str[], int d)
// {
//     int i = 0;
//     while (x)
//     {
//         str[i++] = (x%10) + '0';
//         x = x/10;
//     }

//     // If number of digits required is more, then
//     // add 0s at the beginning
//     while (i < d)
//         str[i++] = '0';

//     reverse(str, i);
//     str[i] = '\0';
//     return i;
// }

// // Converts a floating point number to string.
// void ftoa(float n, char *res, int afterpoint)
// {
//     // Extract integer part
//     int ipart = (int)n;

//     // Extract floating part
//     float fpart = n - (float)ipart;

//     // convert integer part to string
//     int i = intToStr(ipart, res, 0);

//     // check for display option after point
//     if (afterpoint != 0)
//     {
//         res[i] = '.';  // add dot

//         // Get the value of fraction part upto given no.
//         // of points after dot. The third parameter is needed
//         // to handle cases like 233.007
        // fpart = fpart * pow(10, afterpoint);

//         intToStr((int)fpart, res + i + 1, afterpoint);
//     }
// }

// // driver program to test above funtion
// int main()
// {
//     char res[20];
//     float n = 233.007;
//     ftoa(n, res, 4);
//     printf("\n\"%s\"\n", res);
//     return 0;
// }
