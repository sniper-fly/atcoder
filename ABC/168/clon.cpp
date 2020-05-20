#include <iostream>
#include <cstdio>
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
	a_x = a * sin(2 * M_PI * (60 * h + m) / 720);
	a_y = a * cos(2 * M_PI * (60 * h + m) / 720);
	b_x = b * sin(2 * M_PI * m / 60);
	b_y = b * cos(2 * M_PI * m / 60);
	ans = sqrt(pow((a_x - b_x), 2.0) + pow((a_y - b_y), 2.0));
	
	printf("%.10f\n", ans);
	return (0);
}