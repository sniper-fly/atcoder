#include <stdio.h>

int		main(void)
{
	int A, B, C, D;

	scanf ("%d %d %d %d", &A, &B, &C, &D);

	while (1)
	{
		C -= B;
		if (C <= 0)
		{
			printf("Yes");
			return (0);
		}

		A -= D;
		if (A <= 0)
		{
			printf("No");
			return (0);
		}
	}
}