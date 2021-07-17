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

    ll N, K;
    cin >> N >> K;

    map<ll, ll> candies;
    static ll candy_ar[300010];

    rep(i, N) {
        cin >> candy_ar[i];
    }
    ll i = 0;
    ll kind = 0;
    ll max_kind = 0;
    for (; i < K; ++i) {
        candies[candy_ar[i]]++;
        if (candies[candy_ar[i]] == 1) {
            ++kind;
        }
        max_kind = max(kind, max_kind);
    }

    for (; i < N; ++i) {
        candies[candy_ar[i - K]]--;
        if (candies[candy_ar[i - K]] == 0) {
            --kind;
        }

        candies[candy_ar[i]]++;
        if (candies[candy_ar[i]] == 1) {
            ++kind;
        }
        max_kind = max(kind, max_kind);
    }
    cout << max_kind << endl;
}
