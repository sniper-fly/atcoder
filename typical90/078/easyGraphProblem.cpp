

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

// int main()
// {
//     cin.tie(0);
//     ios::sync_with_stdio(0);
//     cout << fixed << setprecision(10);
// }

vector<ll> G[100010];
 
int main()
{
  ll N, M;
  cin >> N >> M;
  rep(i, M){
    ll a, b;
    cin >> a >> b;
    --a;
    --b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  ll ct = 0;
  rep(i, 100010) {
      // iは頂点, G[i]は隣接頂点配列
      ll smaller = 0;
      for (ll j: G[i]) {
          if (i > j) {
              smaller += 1;
          }
      }
      if (smaller == 1) {
          ct += 1;
      }
  }
  cout << ct << endl;
  return (0);
}
