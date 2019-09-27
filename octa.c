#include "libft/libft.h"
#include <stdio.h>

char	*octa(int dec)
{
	char *h;
	char *tmp1;
	int tmp2;
	int i;

	h = ft_strnew(4);
	tmp1 = ft_strnew(4);
	h[3] = '\0';
	i = 3;
	tmp2 = dec;
	while (--i >= 0)
	{
		tmp1 = ft_itoa(tmp2 % 8);
		h[i] = tmp1[0];
		tmp2 /= 8;
	}
	printf("%s\n", h);
	return (h);
}

int main()
{
	char *convert;

	convert = octa(11);
	printf("%s\n", convert);
	return 0;
}