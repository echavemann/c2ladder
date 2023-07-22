#pragma GCC optimize("O2,no-stack-protector,unroll-loops,fast-math")
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define MP make_pair;
#define vt vector
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x) (int)x.size()
#define REP(i, a) for (int i = 0; i < a; i++)
#define pii pair<int, int>;
#define pll pair<ll, ll>;

using namespace std;

typedef vector<ll> vl;
typedef pair<ll,ll> pl;

void solve()
{
    ll k, n, m; cin >> k >> n >> m;
    vl act1; vl act2;
    REP(i, n) {
        ll z; cin >> z; act1.PB(z);
    }
    REP(i, m) {
        ll z; cin >> z; act2.PB(z);
    }
    ll p1 = 0; ll p2 = 0;
    vl res;
    REP(i, n+m) {
        if ((p1 < n)&&(act1[p1]==0)){
            res.PB(0);
            k++;
            p1++;
        } 
        else if ((p2 < m)&&(act2[p2] == 0)) {
            res.PB(0);
            k++;
            p2++;
        }
        else if ((p1 < n)&&(act1[p1] <= k)) {
            res.PB(act1[p1]);
            p1++;
        }
        else if ((p2 < m)&&(act2[p2] <= k)) {
            res.PB(act2[p2]);
            p2++;
        }
        else {
            cout << -1 << "\n";
            return;
        }
    }
    for (auto x : res) {
        cout << x << " ";
    }
    cout << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t;
    	cin >> t;
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
