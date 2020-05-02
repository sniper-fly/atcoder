// 方針、500円を０－A枚以下、またはX円を超えない範囲でループ
// そのループの中で100円を０ーB枚以下、ｘ円を超えない範囲でループ
// そのループの中で、50円を０－Ｃ枚以下、Ｘ円を超えない範囲でループ
// 合計金額がＸに等しい時、カウンターを一つプラスする

#include <stdio.h>

int		ret_sum(int i1, int i2, int i3)
{
	return((500 * i1) + (100 * i2) + (50 * i3));
}

int		main(void)
{
	int a;
	int b;
	int c;
	int x;
	int i1 = 0;
	int i2 = 0;
	int i3 = 0;
	int ct = 0;

	scanf("%d\n%d\n%d\n%d", &a, &b, &c, &x);

	for(i1 = 0; !(i1 > a); i1++)
	{
		for(i2 = 0; !(i2 > b); i2++)
		{
			for(i3 = 0; !(i3 > c); i3++)
			{
				// printf("i1 = %d, i2 = %d, i3 = %d, x = %d, total = %d\n", i1, i2, i3, x, ret_sum(i1, i2, i3));
				if (ret_sum(i1, i2, i3) == x)
					ct++;
			}
		}
	}
	printf("%d", ct);
	
	return (0);
}