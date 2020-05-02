#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int length;
	// char buf[500];
	int *ar;
	int i = 0;
	int ct = 0;
	int flag = 0;

	scanf("%d", &length);
	ar = (int *)malloc(sizeof(int) * length);
	// fgets(buf, 500, stdin);	
	while (i < length)
	{
		scanf("%d", &ar[i]);
		i++;
	}

	while(flag == 0)
	{
		i = 0;
		while (i < length)
		{
			if(ar[i] % 2 == 1)
			{
				flag = 1;
				break;
			}
			ar[i] = ar[i] / 2;
			i++;
		}
		if (flag == 1)
			break;
		ct++;
	}
	// for (i = 0; i < length; i++)
	// 	printf("%d", ar[i]);

	printf("%d", ct);
	return (0);
}