#include <stdio.h>

int		main(void)
{
	// int sunuke[101];
	int Aarray[10010];
	int i, j, N, K, d, ar_idx, tmp;
	int num_ct = 0;

	ar_idx = 0;
	scanf("%d %d", &N, &K);
	for (i = 0; i < K * 2; i++)
	{
		if (i % 2 == 0)
		{
			scanf ("%d", &d);
		}
		else
		{
			for (j = 0; j < d; j++)
			{
				scanf("%d", &Aarray[ar_idx + j]);
			}
			ar_idx += j;
		}
	}

	for (i=0; i<ar_idx; ++i) {
	    for (j=i+1; j<ar_idx; ++j) {
	      if (Aarray[i] > Aarray[j]) {
	        tmp =  Aarray[i];
	        Aarray[i] = Aarray[j];
	        Aarray[j] = tmp;
	      }
	    }
	}

	tmp = Aarray[0];
	num_ct++;
	// sunuke[num_ct] = Aarray[0];
	for (i = 1; i < ar_idx; i++)
	{
		if (tmp != Aarray[i])
		{
			num_ct++;
			// sunuke[num_ct] = Aarray[i];
		}
		tmp = Aarray[i];
	}
	printf("%d",N - num_ct);
	// for (i = 0; i < ar_idx; i++)
	// {
	// 	printf("%d", Aarray[i]);
	// }

	return (0);
}