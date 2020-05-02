#include <stdio.h>

int		main(void)
{
	int a;
	int b;
	int c;
	int total;
	char d[100];

	scanf("%d", &a);
	
	scanf("%d %d", &b, &c);
	
	scanf("%s", d);

	total = a + b + c;
	printf("%d %s", total, d);

	return (0);
}