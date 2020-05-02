// scanfでループ受け取り
// 1 <= n <= 100
// 1 <= a <= 100
// 配列に格納して、ソートして新しい配列に入れる
// aliceは大きい方から偶数インデックスの数字を合計
// bobは奇数インデックスの数字を合計
// 合計値の引き算

#include <stdio.h>
#include <stdlib.h>

void	wata_swap(int *dest, int *src)
{
	int tmp;

	tmp = *src;
	*src = *dest;
	*dest = tmp;
}

void	wata_sort(int *ar, int size)
{
	int i1;
	int i2;

	i1 = 0;
	while (i1 < size - 1)
	{
		i2 = i1 + 1;
		while (i2 < size)
		{
			if(ar[i1] < ar[i2])
			{
				wata_swap(&ar[i1], &ar[i2]);
			}
			i2++;
		}
		i1++;
	}
}

int		main(void)
{
	int loop_num;
	int i;
	int card_ar[100];
	int alice, bob;
	int discard;

	discard = scanf("%d", &loop_num);
	// card_ar = (int *)malloc(sizeof(int) * loop_num);
	
	i = 0;
	while (i < loop_num)
	{
		discard = scanf("%d", &card_ar[i]);
		i++;
	}

	(void)discard;

	// printf("before \n");
	// for (int idx = 0; idx < loop_num; idx++)
	// {
	// 	printf("%d ", card_ar[idx]);
	// }
	// printf("\n");

	wata_sort(card_ar, loop_num);

	// printf("after \n");
	// for (int idx = 0; idx < loop_num; idx++)
	// {
	// 	printf("%d ", card_ar[idx]);
	// }
	// printf("\n");

	alice = 0;
	i = 0;
	while (i < loop_num)
	{
		alice += card_ar[i];
		i += 2;
	}

	bob = 0;
	i = 1;
	while (i < loop_num)
	{
		bob += card_ar[i];
		i += 2;
	}

	printf("%d", alice - bob);

	return (0);	
}