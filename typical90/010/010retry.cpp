/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   010retry.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnakai <rnakai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:06:46 by rnakai            #+#    #+#             */
/*   Updated: 2021/07/10 18:29:39 by rnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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

    // 全開までの値の合計値をとっておく
    // 範囲がしていされたらそれらのインデックスの値を引き算するだけ

    const int MAX = 100010;

    ll N;
    static ll P1[MAX];
    static ll P2[MAX];
    static ll P1sum[MAX];
    static ll P2sum[MAX];

    int cls;
    ll point;
    cin >> N;

    rep(i, N) {
        cin >> cls >> point;
        if (cls == 1) {
            P1[i] = point;
        } else {
            P2[i] = point;
        }
    }

    P1sum[0] = P1[0];
    P2sum[0] = P2[0];

    for (ll i = 1; i < N; ++i) {
        P1sum[i] = P1[i] + P1sum[i - 1];
        P2sum[i] = P2[i] + P2sum[i - 1];
    }

    ll Q;
    ll L, R;

    cin >> Q;
    rep (i, Q) {
        cin >> L >> R;
        --L;
        --R;
        cout << P1sum[R] - P1sum[L - 1]
            << " "
            << P2sum[R] - P2sum[L - 1]
            << endl;
    }
}
