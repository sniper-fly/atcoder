
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
#include <numeric>

// 常にAが大きい
ll gcd(ll A, ll B)
{
    if (A < B) {
        ll tmp;
        tmp = A;
        A = B;
        B = tmp;
    }
    ll mod;

    while (1) {
        mod = A % B;
        if (mod == 0) {
            return B;
        }
        A = B;
        B = mod;
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout << fixed << setprecision(10);

    ll A, B, C;

    cin >> A >> B >> C;

    ll greatest_common_divider;
    greatest_common_divider = gcd(A, gcd(B, C));

    ll total_slice = 0;
    total_slice += 0
        + A / greatest_common_divider - 1
        + B / greatest_common_divider - 1
        + C / greatest_common_divider - 1;
    cout << total_slice << endl;
}