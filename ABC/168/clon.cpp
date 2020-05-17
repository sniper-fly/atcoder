#include <iostream>
#include <cmath>
using namespace std;

int		main(void)
{
	int a, b, h, m;
	double a_x, a_y, b_x, b_y;
	double ans;

	cin >> a >> b >> h >> m;
	// ans = sqrt(a*a + b*b 
	// - 2*a*b*( sin(M_PI * m / 30) * sin(M_PI * h / 6)
	// 		+ (cos(M_PI * m / 30) * cos(M_PI * h / 6)) ) );
	// ans = sqrt(pow( ( a*sin(M_PI * m / 30) - b*sin(M_PI * h / 6) ), 2.0) + pow((a * cos(M_PI * m / 30) - b * cos(M_PI * h / 6)), 2.0) );
	a_x = a * sin(30 * h);
	a_y = a * cos(30 * h);
	b_x = b * sin(6 * m);
	b_y = b * cos(6 * m);
	ans = sqrt(pow((a_x - b_x), 2.0) + pow((a_y - b_y), 2.0));
	
	cout << ans << endl;
	return (0);
}