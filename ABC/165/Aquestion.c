#include <stdio.h>


int		main(void)
{
	int K, A, B;
	int i;

	scanf("%d", &K);
	scanf("%d %d", &A, &B);

	for (i = 0; i <= B; i += K)
	{
		if (A <= i && i <= B)	
		{
			printf("OK");
			return (0);
		}
	}
	printf("NG");
	return (0);
}