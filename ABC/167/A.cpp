#include <iostream>
#include <string>
using namespace std;

int		main(void)
{
	string S;
	string T;
	int s_len, t_len;
	int idx;

	cin >> S;
	cin >> T;
	s_len = S.length();
	t_len = T.length();

	idx = 0;
	while (idx < s_len)
	{
		if (S[idx] != T[idx])
		{
			cout << "No" << endl;
			return (0);
		}
		idx++;
	}
	cout << "Yes" << endl;

	return (0);
}