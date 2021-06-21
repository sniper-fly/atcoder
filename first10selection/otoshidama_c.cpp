

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

// man + gosen + sen = N
// 10000 * man + 5000 * gosen + 1000 * sen = Y
// 9000 * man + 4000 * gosen = Y - 1000 * N

int main(void)
{
    ll man, gosen, sen;
    ll N, Y;
    cin >> N >> Y;
    rep (i, N + 1) {
        rep (j, N + 1) {
            sen = N - i - j;
            if (9000 * i + 4000 * j == Y - 1000 * N && sen >= 0) {
                cout << i << " " << j << " " << sen << endl;
                return (0);
            }
        }
    }
    cout << "-1 -1 -1" << endl;
}

