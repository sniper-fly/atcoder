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
// LLMAX = 9,223,372,036,854,775,807 (9.2 * 10^18)
// IMAX = 2147483647 (2.1*10^9)
/*
10! 3628800
9! 362880
8! 40320
7 5040
6! 720
5 120
4 24
3 6
2 2
1 1

*/

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout << fixed << setprecision(10);

    ll P;
    cin >> P;

    ll ten = 3628800,
    nine = 362880,
    eight = 40320,
    seven = 5040,
    six = 720,
    five = 120,
    four = 24,
    three = 6,
    two = 2,
    one = 1;
    ll coins[11] = {
     3628800,
     362880,
     40320,
     5040,
     720,
     120,
     24,
     6,
     2,
     1
    };

    //まず10!硬貨で調べる。
    ll ct = 0;
    ll remain;
    ct += P / ten;
    remain = P % ten;
    
    for (int i = 1; i < 10; ++i) {
        ct += remain / coins[i];
        remain = remain % coins[i];
    }
    cout << ct << endl;
}
