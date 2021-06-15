
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
    ll A[1010], B[1010];
    cin >> N >> K;
    rep(i,N) {
        cin >> A[i];
    }
    rep(i,N) {
        cin >> B[i];
    }
    ll x[1010];
    ll sum = 0;;
    rep(i,N) {
        x[i] = A[i] - B[i];
        sum += abs(x[i]);
    }
    if (K == sum) {
        cout << "Yes" << endl;
    }
    else if (sum < K && (K - sum) % 2 == 0) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    // a, b, c,,,,
    // x = 各項をそれぞれ引き算した値の合計 は最低でもアクションが必要
    // x < K のとき、K - 2 が2で割り切れたらyes
}