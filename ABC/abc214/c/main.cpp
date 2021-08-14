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

ll minl(ll a, ll b)
{
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout << fixed << setprecision(10);

    ll N;
    cin >> N;
    vector<ll> S, T, time;
    ll tmp;
    rep(i, N) {
        cin >> tmp;
        S.push_back(tmp);
    }
    rep(i, N) {
        cin >> tmp;
        T.push_back(tmp);
    }

    time.push_back(T[0]);
    //1回目
    for (int i = 1; i < N; ++i) {
        time.push_back(minl(S[i - 1] + time[i - 1], T[i]));
    }

    //N番目のSが1番目のSに宝石を渡す時間のほう、1番目のTがSに宝石を渡すより速い場合を考える
    //2回目
    time[0] = minl(S[N - 1] + time[N - 1], time[0]);
    for (int i = 1; i < N; ++i) {
        time[i] = (minl(S[i - 1] + time[i - 1], T[i]));
    }

    rep(i, N) {
        std::cout << time[i] << std::endl;
    }
}
