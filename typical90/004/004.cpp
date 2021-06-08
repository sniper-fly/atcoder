#include <iostream>
using namespace std;

int main(void)
{
	int h, w;
	cin >> h >> w;
	static int a[2010][2010];
	static int sumw[2010];
	static int sumh[2010];

	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			cin >> a[i][j];
		}
	}

	// それぞれの行の合計を出す
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			sumw[i] += a[i][j];
		}
	}

	// それぞれの列の合計を出す
	for (int i = 0; i < w; ++i) {
		for (int j = 0; j < h; ++j) {
			sumh[i] += a[j][i];
		}
	}

	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			cout << sumw[i] + sumh[j] - a[i][j];
			if (j + 1 < w)
				cout << " ";
		}
		cout << endl;
	}
}