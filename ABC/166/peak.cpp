#include <iostream>
#include <vector>
using namespace std;

int		main(void)
{
	int A, B;
	int i;
	int N, M;
	int ct = 0;

	cin >> N >> M;
	vector<int> goodpeak(N, true);
	vector<int> Hs(N);
	for (i = 0; i < N; i++)
	{
		cin >> Hs[i];
	}
	for (i = 0; i < M; i++)
	{
		cin >> A >> B;
		if (Hs[A - 1] <= Hs[B - 1])
		{
			goodpeak[A - 1] = false;
		}
		if (Hs[B - 1] <= Hs[A - 1])
		{
			goodpeak[B - 1] = false;
		}
	}

	for (i = 0; i < N; i++)
	{
		if (goodpeak[i] == true)
		{
			ct++;
		}
	}
	cout << ct << endl;
	return (0);
}