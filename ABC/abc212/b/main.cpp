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
// LMAX = 18446744073709551615 (1.8*10^19)
// IMAX = 2147483647 (2.1*10^9)
/*

*/

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout << fixed << setprecision(10);

    string pw;
    cin >> pw;
    char head = pw[0];
    // 全部同じ数字だったら
    rep(i, 4) {
        if (pw[i] != head) {
            break;
        }
        if (i == 3) {
            cout << "Weak" << endl;
            return 0;
        }
    }
    char previous = pw[0];
    for (int i = 1; i < 4; ++i) {
        // not 連続する数字なら
        if (!(previous + 1 == pw[i] || (previous == '9' && pw[i] == '0'))) {
            cout << "Strong" << endl;
            return 0;
        }
        previous = pw[i];
    }
    cout << "Weak" << endl;
    return 0;
}
