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
    ll xa, ya, xb, yb, xf, yf; cin >> xa >> ya >> xb >> yb >> xf >> yf;
    ll res = abs(xa-xb) + abs(ya - yb);
    bool xflag = (((yf < ya)&& (yf > yb))||((yf < yb)&&(yf > ya)));
    bool yflag = (((xf < xa) && (xf > xb))||((xf < xb)&&(xf > xa)));
    if ((xa == xb) && (xf == xa) && (xflag)) {
        res += 2;
    }
    else if ((ya == yb)&&(ya == yf)&&(yflag)) {
        res += 2;
    }
    cout << res << endl;

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
