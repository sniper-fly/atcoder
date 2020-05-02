// Y円より小さい範囲で、manを０からNループ
// 同様にそのループの中でgosenを０からN-manループ
// senの値は自動的に決まる（N-man-gosen)
// 二重ループの中で、合計値がYと等しくなった時return(man, gosen, sen)
// 全てのループを回しても等しい値が見つからなければreturn(-1, -1, -1)

#include <stdio.h>

int		sum_of_osatsu(int man, int gosen, int sen);

int		main(void)
{
	int N, Y;
	int man, gosen, sen;

	scanf("%d %d", &N, &Y);
	for (man = 0; man <= N; man++)
	{
		for(gosen = 0; gosen <= N - man; gosen++)
		{
			sen = N - man - gosen;
			if (sum_of_osatsu(man, gosen, sen) == Y)
			{
				printf("%d %d %d", man, gosen, sen);
				return (0);
			}
		}
	}
	printf("-1 -1 -1");
	return (0);
}

int		sum_of_osatsu(int man, int gosen, int sen)
{
	return (10000 * man + 5000 * gosen + 1000 * sen);
}