#include <iostream>
using namespace std;

int		main(void)
{
	int ct = 0;
	int N, K;
	int d;
	int A[100];
	int sunuke;

	for (int k = 0; k < 100; k++)
	{
		A[k] = 0;
	}

	cin >> N >> K;
	for (int i = 0; i < K; i++)
	{
		cin >> d;
		for (int j = 0; j < d; j++)
		{
			cin >> sunuke;
			A[sunuke - 1]++;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (A[i] == 0)
		{
			ct++;
		}
	}
	cout << ct << endl;

	return (0);
}