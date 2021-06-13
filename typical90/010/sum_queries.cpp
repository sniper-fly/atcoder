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

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout << fixed << setprecision(10);

    ll people;
    cin >> people;
    ll cls, score;
    static ll cl1[100010];
    static ll cl2[100010];
    rep(i, people) {
        cin >> cls >> score;
        if (cls == 1) {
            cl1[i] = score;
            cl2[i] = 0;
        }
        else {
            cl2[i] = score;
            cl1[i] = 0;
        }
    }
    ll q_num;
    ll le, ri;
    static ll cum1[100010];
    static ll cum2[100010];
    cum1[0] = cl1[0];
    cum2[0] = cl2[0];
    for (int i = 1; i < people; i++) {
        cum1[i] = cl1[i] + cum1[i - 1];
        cum2[i] = cl2[i] + cum2[i - 1];
    }

    ll sum1, sum2;
    cin >> q_num;
    rep(i, q_num) {
        cin >> le >> ri;
        --le; --ri;
        if (le == 0) {
            sum1 = cum1[ri];
            sum2 = cum2[ri];
        }
        else {
            sum1 = cum1[ri] - cum1[le - 1];
            sum2 = cum2[ri] - cum2[le - 1];
        }
        cout << sum1 << " " << sum2 << endl;
    }
}
