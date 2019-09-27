#include "libft/libft.h"
#include <stdio.h>

char	check(int num)
{
	char c;
	int i;

	i = 0;
	while (--num > 10)
		i++;
	c = 65 + i;
	return (c);
}

char	*hex(int dec)
{
	char *h;
	char *tmp1;
	int tmp2;
	int i;

	h = ft_strnew(3);
	tmp1 = ft_strnew(3);
	h[3] = '\0';
	i = 2;
	tmp2 = dec;
	while (--i >= 0)
	{
		tmp1 = ft_itoa(tmp2 % 16);
		if (ft_atoi(tmp1) > 9)
			tmp1[0] = check(ft_atoi(tmp1));
		h[i] = tmp1[0];
		tmp2 /= 16;
	}
	printf("%s\n", h);
	return (h);
}

int main()
{
	char *convert;

	convert = hex(74);
	printf("%s", convert);
	return 0;
}