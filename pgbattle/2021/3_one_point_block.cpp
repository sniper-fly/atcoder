
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

#define warukazu 998244353

ll kaijou(ll num)
{
    if (num == 1 || num == 0) {
        return 1;
    }
    return (num * kaijou(num - 1)) % warukazu;
}

ll comb(ll left, ll right)
{
    ll left_multi = left;
    rep(i, right - 1) {
        --left;
        left_multi = left_multi * left % warukazu;
    }
    ll right_multi = right;
    ll tmp_right = right;
    rep(i, right - 1) {
        --tmp_right;
        right_multi = right_multi * tmp_right % warukazu;
    }
    return left_multi / right_multi;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout << fixed << setprecision(10);

    ll N, M, A, B;
    cin >> N >> M >> A >> B;
    ll result = comb(M + N, M) - (comb(A + B, A) * comb(M + N - A - B, B - M));
    std::cout << result << std::endl;
}
