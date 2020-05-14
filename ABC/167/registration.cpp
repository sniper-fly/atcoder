#include <iostream>
#include <string>
using namespace std;

int		main(void)
{
	string S, T;
	cin >> S >> T;
	T[T.length() - 1] = '\0';
	cout << S << ", " << T << endl;
	cout << S.length() << ", " << T.length() << endl;
	if (S == T)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return (0);
}