#include <stdio.h>

int		main(void)
{
	int N;
	int cdnt[100000][3];
	int i;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d %d %d", &cdnt[i][0], &cdnt[i][1], &cdnt[i][2]);
	}
	return (0);
}