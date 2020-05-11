#include <iostream>
using namespace std;

int		main(void)
{
	int A, B, C, K;
	cin >> A >> B >> C >> K;
	if (K <= A)
	{
		cout << K << endl;
	}
	else if (K <= A + B)
	{
		cout << A << endl;
	}
	else
	{
		cout << 2 * A + B - K << endl;
	}

	return (0);
}