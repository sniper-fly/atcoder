#include <iostream>
#include <string>
using namespace std;

int		main(void)
{
	int knum;
	string str;

	cin >> knum >> str;
	for (int i = 0; i < knum && str.length() > i ; i++)
	{
		cout << str[i];
	}
	if (str.length() > knum)
	{
		cout << "...";
	}
	cout << endl;



	return (0);
}