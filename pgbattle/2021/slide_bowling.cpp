
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

    ll N, M;
    cin >> N >> M;
    vector<ll> a(N), b(N);
    vector<bool> is_pin_standing(M);
    rep(i, M) {
        is_pin_standing[i] = true;
    }

    rep(i, N) {
        cin >> a[i] >> b[i];
    }

    rep(i, N) {
        ll total_time = a[i] + b[i];
        if (i - total_time >= 0) {
            is_pin_standing[i - total_time] = false;
        }
    }

    // falseの数を調べる
    ll ct = 0;
    rep(i, M) {
        if (is_pin_standing[i] == false) {
            ++ct;
        }
    }
    std::cout << ct << std::endl;

    /*
    到達時間 = a + b 
    i番目のレーンの人
    i - (a + b) = 倒したピンの番号
    */
}
