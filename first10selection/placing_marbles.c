#include <stdio.h>

int		main(void)
{
	int i = 0;
	char strings[5];
	int ct = 0;

	scanf("%s", strings);
	while (i < 3)
	{
		if(strings[i] == '1')
		{
			ct++;
		}
		i++;
	}
	printf("%d", ct);
	return (0);
}