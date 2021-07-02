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

    // 9で割る
    string N;
    int K;
    cin >> N >> K; 

    if (N == "0") {
        cout << "0" << endl;
        return (0);
    }

    rep(i, K) {
        ll base = 1;
        ll num = 0;
        auto itr = N.end();
        --itr;
        while (1) {
            if (itr == N.begin()) {
                num += (*itr - '0') * base;
                break;
            }
            num += (*itr - '0') * base;
            base *= 8;
            --itr;
        }

        string num8b;
        while (num > 0) {
            num8b += num % 9 + '0';
            num /= 9;
        }
        reverse(num8b.begin(), num8b.end());

        int idx;
        while (1) {
            idx = num8b.find("8");
            if (idx == -1) {
                break;
            }
            num8b[idx] = '5';
        }
        N = num8b;
    }
    cout << N << endl;
}