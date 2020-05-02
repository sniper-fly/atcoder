// １＜＝数列＜＝Mの範囲の、N個の数列を作る

#include <stdio.h>

int 	main(void)
{
	int N, M, Q;
	int i;
	int q_array[50][4];
	int n_array[3628810][10];

	scanf("%d %d %d", &N, &M, &Q);
	for (i = 0; i < Q; i++)
	{
		scanf("%d %d %d %d", &q_array[i][0], &q_array[i][1], &q_array[i][2], &q_array[i][3]);
	}

// 最大10重のforループを回して最大3628200通りの整数列をint型の配列に格納する


	

}