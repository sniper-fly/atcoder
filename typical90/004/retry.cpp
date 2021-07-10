
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
using pll=pair<ll, ll>;
#define rep(i,n) for (ll i=0; i<n; ++i)
#define all(c) begin(c),end(c)
#define PI acos(-1)
#define oo 2e18
template<typename T1, typename T2>
bool chmax(T1 &a,T2 b){if(a<b){a=b;return true;}else return false;}
template<typename T1, typename T2>
bool chmin(T1 &a,T2 b){if(a>b){a=b;return true;}else return false;}
//priority_queue<ll, vector<ll>, greater<ll>> Q;
// LLMAX = 9,223,372,036,854,775,807 (9.2 * 10^18)
// IMAX = 2147483647 (2.1*10^9)
/*

*/

int main(void)
{
    //行の合計を出して列にする
    //列の合計を出す||

    ll H, W;
    ll tmp;
    static ll Wtotal_row[2010];
    static ll Htotal_column[2010];
    static ll table[2010][2010];

    cin >> H >> W;
    rep(i, H) {
        rep(j, W) {
            cin >> tmp;
            table[i][j] = tmp;
        }
    }

    //行の合計を計算して一列の配列にする
    // 高さi は固定
    rep(i, H) {
        rep(j, W) {
            Wtotal_row[i] += table[i][j];
        }
    }

    //横jを固定
    rep(j, W) {
        rep(i, H) {
            Htotal_column[j] += table[i][j];
        }
    }

    rep(i, H) {
        rep(j, W) {
            if (j == 0) {
                cout << Wtotal_row[i] + Htotal_column[j] - table[i][j];
            } else {
                cout << " " << Wtotal_row[i] + Htotal_column[j] - table[i][j];
            }
        }
        cout << endl;
    }
}
