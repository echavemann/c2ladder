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
    // your code here
    
    ll n; cin >> n; ll res = 0;
    if (n%10 == 9) res++; //its inclusive
    if (n == 9) cout << 1 << endl;
    else cout << res + n/10 << endl;
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
