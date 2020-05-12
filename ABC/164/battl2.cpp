#include <iostream>
using namespace std;

int		battle_turn(int attack, int hp)
{
	return (hp + attack - 1) / attack;
}

int		main(void)
{
	int A, B, C, D;

	cin >> A >> B >> C >> D;
	if (battle_turn(D, A) >= battle_turn(B, C))	cout << "Yes" << endl;
	else cout << "No" << endl;

	return (0);
}