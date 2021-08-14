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
    ll tmp;
    vector<ll> numbers_a, numbers_b;
    rep (i, N) {
        cin >> tmp;
        numbers_a.push_back(tmp);
    }
    rep (i, M) {
        cin >> tmp;
        numbers_b.push_back(tmp);
    }

    // Anumbersをソートして二分探索
    sort(all(numbers_a));
    // 前回の差分の値を保持し、二分探索した差分の結果が前回より大きくなったら探索終了
    // rep (i, M) {
    // }

    ll num = numbers_b[0];

    ll minx = LONG_LONG_MAX;
    rep(i, M) {
        num = numbers_b[i];
        //にぶたん
        ll idx_to_check = (N - 1) / 2;
        ll num_line = N;
        ll diff;
        ll pre_diff = LONG_LONG_MAX;
        while (true) {
            if (numbers_a[idx_to_check] < num) {
                idx_to_check += (num_line / 4);
            } else {
                idx_to_check -= (num_line / 4);
            }
            diff = abs(numbers_a[idx_to_check] - num);
            if (diff >= pre_diff) {
                diff = pre_diff;
                break ;
            }
            if (num_line / 4 == 0) {
                ll another_diff = abs(numbers_a[idx_to_check + 1] - num);
                diff = min(diff, another_diff);
                another_diff = abs(numbers_a[idx_to_check - 1] - num);
                diff = min(diff, another_diff);
                break ;
            }
            pre_diff = diff;
            num_line /= 2;
        }
        //
        minx = min(minx, diff);
    }
    cout << minx << endl;
}
