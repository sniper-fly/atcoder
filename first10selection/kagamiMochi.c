// N個の入力を受け取る
// ｄをソートする
// 降順の配列を作り、インデックスが最初の物をｔｍｐに入れ、順に比較していく
// ｔｍｐより小さければｔｍｐに入れ、ｃｔをインクリメント
// ループを回しきった時のｃｔの数が鏡餅の最大
#include <stdio.h>
#include <stdlib.h>

void	wata_swap(int *dest, int *src);
void	wata_sort(int *ar, int size);

int		main(void)
{
	int N;
	int *mochi_ar;
	int i;
	int tmp;
	int ct = 1;

	scanf("%d", &N);	
	mochi_ar = (int *)malloc(sizeof(int) * N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &mochi_ar[i]);
	}
	wata_sort(mochi_ar, N);
	tmp = mochi_ar[0];
	for (i = 1; i < N; i++)
	{
		if (tmp > mochi_ar[i])
		{
			tmp = mochi_ar[i];
			ct++;
		}
	}
	printf("%d", ct);
	
	return (0);
}

void	wata_swap(int *dest, int *src)
{
	int tmp;

	tmp = *src;
	*src = *dest;
	*dest = tmp;
}

void	wata_sort(int *ar, int size)
{
	int i;
	int i2;

	for (i = 0; i < size - 1; i++)
	{
		for (i2 = i + 1; i2 < size; i2++)
		{
			if (ar[i] < ar[i2])
				wata_swap(&ar[i], &ar[i2]);
		}
	}
}