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
    ll N, A, B;
    cin >> N >> A >> B;
    ll ans[40] = {};
    ll total = 0;
    for(ll i = 1; i <= N; ++i){
        ll I = i;
        ll sum = 0;
        while (I > 0){
            sum += I%10;
            I /= 10;
        }
        if (2 <= sum && sum <= 5) {
            total += i;
        }
    }
    cout << total << endl;
}