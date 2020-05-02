#include <stdio.h>

int		main(void)
{
	int S, W;

	scanf("%d %d", &S, &W);
	if (S <= W)
		printf("unsafe");
	else
	{
		printf("safe");
	}
	
	
	return (0);
}