
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

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout << fixed << setprecision(10);

    ll N;
    string S;

    cin >> N >> S;

    rep(i, N) {
        S[i] -= 'a';
    }

    ll i;
    for(i = 0; i + 1 < N; ++i) {
        if (S[i] == 2) {
            S[i] = 0;
            S[i + 1]++;
        }
    }

    if (S[i] == 2) {
        S[i] = 0;
        S += 1; //末尾に1を足す
        N++;
    }

    ll exp = 0;
    ll total = 0;
    rep(j, N) {
        total += S[j] * powl(2, exp);
        exp++;
    }
    cout << total << endl;
}
