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

    ll N;
    ll tmp;
    // static ll C[200010];
    vector<ll> C;
    cin >> N;
    rep(i, N) {
        cin >> tmp;
        C.push_back(tmp);
    }
    sort(C.begin(), C.end());

    ll output = 1;
    ll divider = pow(10, 9) + 7;
    ll ct = 0;
    for (auto it = C.begin(), e= C.end(); it != e; ++it) {
        output = output * (*it - ct) % divider;
        ++ct;
    }
    cout << output << endl;
}
