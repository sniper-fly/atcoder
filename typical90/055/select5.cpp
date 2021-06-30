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

    ll N, P, Q;
    ll A[110];
    ll ct = 0;
    cin >> N >> P >> Q;
    rep(i, N) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                for (int l = k + 1; l < N; l++) {
                    for (int m = l + 1; m < N; m++) {
                        if ((A[i] % P)
                        * (A[j] % P) % P
                        * (A[k] % P) % P
                        * (A[l] % P) % P
                        * (A[m] % P) % P == Q) {
                            ++ct;
                        }
                    }
                }
            }
        }
    }
    cout << ct << endl;
    // P * x + Q == A1 * A2 ... A
    // N!
}