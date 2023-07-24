#pragma GCC optimize("O2,no-stack-protector,unroll-loops,fast-math")
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define db double
#define MOD 1000000007
#define int128 __int128
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define MP make_pair
#define vt vector
#define ins insert
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x) (int)x.size()
#define REP(i, a) for (int i = 0; i < a; i++)
#define pii pair<int, int>;
#define setprf(x) setprecision(x) << fixed
#define setpr(x) setprecision(x)
#define lb lower_bound
#define ub upper_bound
#define pll pair<ll, ll>;

using namespace std;

template<class T> using pq = priority_queue<T>;
template<class T> using pqg = priority_queue<T, vector<T>, greater<T>>;

typedef vector<ll> vl;
typedef pair<ll,ll> pl;
typedef long double ld;
typedef unsigned long long ull;
typedef complex<ld> cd;

void solve()
{
    ll n, q; cin >> n >> q;
    string song; cin >> song;
    vector<ll> prefix;
    ll roll = 0;
    for (auto x : song) {
        roll += (x-'`');
        prefix.PB(roll);
    }
    REP(i, q) {
        ll l, r; cin >> l >> r;
        l--; r--;
        if (l == 0) cout << prefix[r] << "\n";
        else cout << prefix[r] - prefix[l-1] << endl;
    }

    // Be insane or die trying.
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t = 1;
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
