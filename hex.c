#include "libft/libft.h"
#include <stdio.h>

char	*hex(int dec)
{
	char *h;
	char *tmp1;
	int tmp2;
	int i;

	h = ft_strnew(4);
	tmp1 = ft_strnew(2);
	h[3] = '\0';
	tmp1[2] = '\0';
	i = 2;
	tmp2 = dec;
	while (--i >= 0)
	{
		tmp1 = ft_itoa(tmp2 %= 16);
		h[i] = tmp1[0];
		tmp2 = dec/16;
	}
	printf("%s\n", h);
	return (h);
}

int main()
{
	char *convert;

	convert = hex(78);
	printf("%d", ft_atoi(convert));
	return 0;
}