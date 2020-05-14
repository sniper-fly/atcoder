#include <iostream>
#include <vector>
#define INF 100100100
using namespace std;


int		main(void)
{
	int N, M, X;
	int A[12][12];
	int C[12];
	int ans = INF;

	cin >> N >> M >> X;
	for (int i = 0; i < N; i++)
	{
		cin >> C[i];
		for (int j = 0; j < M; j++)
		{
			cin >> A[i][j];
		}
	}

//最大で000000000000 ~ 11111111111 までループを回す。全ての買い方についてのループ
	for (int i = 0; i < 1<<N; i++)
	{
		int cost = 0;
		vector<int> d(M);
		//M（column）のループ
		for (int j = 0; j < N; j++)
		{
			//if found 1, plus cost and plus each row
			if (i>>j & 1)
			{
				cost += C[j];
				for (int k = 0; k < M; k++)
				{
					d[k] += A[j][k];
				}
			}
		}

		//全ての列がX以上であるかどうか調べる
		bool ok = true;
		for (int l = 0; l < M; l++)
		{
			if (d[l] < X)
			{
				ok = false;
			}
		}
		if (ok)
		{
			ans = min(ans, cost);
		}
	}
	if (ans == INF)
		cout << -1 << endl;
	else
		cout << ans << endl;
	return (0);
}