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
    string s; cin >> s;
    vt<int> x; 
    for (auto z : s) {
        x.PB(int(z-'0'));
    }
    bool flag = false;
    for (int i = (sz(s)-1); i > 0; i--) {
        if ((x[i] + x[i-1]) >= 10) {
            x[i] = (x[i]+x[i-1])%10;
            x[i-1] = 1;
            flag = true;
            break;
        }
    }
    ll n = sz(x);
    if (!flag) {
        x[1] = x[0] + x[1];
        x[0] = -1;
    }
    for (auto z : x) {
        if (z >= 0) {
            cout << z;
        }
    }
    cout << endl;
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
