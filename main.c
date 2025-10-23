#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	int	i = 123456;
	unsigned int u = 123456;
	void *ptr = &i;
	printf("%d\n\n", printf("%c, %s, %p, %d, %i, %u, %x, %X, %%\n", 'c', "caca", ptr, i, i, u, i, i));
	printf("%d\n\n" ,ft_printf("%c, %s, %p, %d, %i, %u, %x, %X, %%\n", 'c', "caca", ptr, i, i, u, i, i));
}
