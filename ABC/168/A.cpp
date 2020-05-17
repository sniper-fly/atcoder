#include <iostream>
using namespace std;

int		main(void)
{
	int N;
	int num;

	cin >> N;
	num = N % 10;
	if (num == 2 || num == 4 || num == 5 || num == 7 || num == 9)
	{
		cout << "hon" << endl;
	}
	else if (num == 0 || num == 1 || num == 6 || num == 8)
	{
		cout << "pon" << endl;
	}
	else
	{
		cout << "bon" << endl;
	}

	return (0);
}