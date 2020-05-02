// まず整数の桁の和を出す関数を作る
// １からNまでループを回す
// A＜＝和＜＝Bであれば足す

#include <stdio.h>

int		ret_digsum(int num)
{
	int total = 0;

	while (num)
	{
		total += num % 10;
		num /= 10;
	}
	return (total);
}

int		main(void)
{
	int i = 1;
	int n;
	int total = 0;
	int min, max;
	
	scanf("%d %d %d", &n, &min, &max);
	while (i <= n)
	{
		if (min <= ret_digsum(i) && ret_digsum(i) <= max)
		{
			total += i;
		}
		i++;
	}
	printf("%d", total);
}