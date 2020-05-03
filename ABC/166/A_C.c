#include <stdio.h>
#include <string.h>

int		main(void)
{
	char contest[5];

	scanf("%s", contest);
	if (strcmp(contest, "ABC") == 0)
	{
		printf("ARC");
		return (0);
	}
	else
	{
		printf("ABC");
		return (0);
	}
}