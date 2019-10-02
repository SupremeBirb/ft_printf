#include "ft_printf.h"
#include <stdio.h>

int	ft_num_digitsf(int len, float check)
{
	while (check /= 10)
		len++;
	return (len);
}

int main()
{
	int len;
	float i;

	i = 1.0452;
	len = ft_num_digitsf(0, i);

	printf("%d", len);
	return (0);
}
