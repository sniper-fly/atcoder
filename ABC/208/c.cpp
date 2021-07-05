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

*/

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout << fixed << setprecision(10);

    ll N, K;
    vector<ll> people;
    vector<ll> people_sort;
    ll tmp;

    cin >> N >> K;

    if (N == 1) {
        cin >> tmp;
        cout << K << endl;
        return (0);
    }

    rep(i, N) {
        cin >> tmp;
        people.push_back(tmp);
        people_sort.push_back(tmp);
    }

    //peopleを昇順にソートする
    sort(people_sort.begin(), people_sort.end());

    ll amari = K % N;
    ll basic = K / N;

    if (amari == 0) {
        rep(i, N) {
            cout << basic << endl;
        }
        return (0);
    }

    ll criterion = people_sort[amari - 1];
    rep(i, N) {
        if (people[i] <= criterion) {
            cout << basic + 1 << endl;
        } else {
            cout << basic << endl;
        }
    }
    return (0);
}
