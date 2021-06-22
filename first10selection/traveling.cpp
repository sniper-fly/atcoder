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

int main(void)
{
    ll N;
    ll t, x, y;
    ll dt, dx, dy;
    ll pt, px, py;

    cin >> N;
    pt = 0; px = 0; py = 0;
    rep(i, N) {
        cin >> t >> x >> y;
        dt = abs(t - pt);
        dx = abs(x - px);
        dy = abs(y - py);
        if (!((dx + dy <= dt) && (dx + dy - dt) % 2 == 0)) {
            cout << "No" << endl;
            return (0);
        }
        pt = t; px = x; py = y;
    }
    cout << "Yes" << endl;
    return (0);
}
