#include <stdio.h>


int		main(void)
{
	unsigned long long X;
	int i;
	unsigned long long yokin = 100;

	scanf("%lld", &X);
	for (i = 0; ; yokin *= 1.01, i++)
	{
		if (yokin >= X)
		{
			printf("%d", i);
			return (0);
		}
	}

	return (0);
}