
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


int main(void)
{
    string S;
    cin >> S;
    reverse(S.begin(), S.end());
    ll len = S.length();
    ll i = 0;
    while (i < len) {
        if (S.substr(i, 6) == "resare") {
            i += 6;
        } else if (S.substr(i, 5) == "esare") {
            i += 5;
        } else if (S.substr(i, 7) == "remaerd") {
            i += 7;
        } else if (S.substr(i, 5) == "maerd") {
            i += 5;
        } else {
            cout << "NO" << endl;
            return (0);
        }
    }
    cout << "YES" << endl;
    return (0);
}

