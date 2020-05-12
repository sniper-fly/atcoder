#include <iostream>
#include <set>
using namespace std;

int		main(void)
{
	int N;
	cin >> N;
	set<string> st;
	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;
		st.insert(str);
	}
	cout << st.size() << endl;
}