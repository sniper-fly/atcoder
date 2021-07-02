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
    std::deque<ll> deq;

    ll Q;
    ll t, x;
    cin >> Q;
    rep(i, Q) {
        cin >> t >> x;
        if (t == 1) {
            deq.push_front(x);
        } else if (t == 2) {
            deq.push_back(x);
        } else {
            cout << deq[x - 1] << endl;
        }
    }
}


/*
    std::deque<int> deq;
    deq.push_front(4);
    deq.push_back(12);
    deq.push_back(12);
    deq.push_back(12);
    deq.push_back(8);
    deq.push_back(12);

    // for (int i = 0; i < 2; ++i) {
    //     cout << deq[i] << " ";
    // }

    for (auto itr = deq.begin(); itr != deq.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
*/