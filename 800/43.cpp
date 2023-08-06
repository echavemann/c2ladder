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
    vl a;
    vl b;
    ll n; cin >> n;
    REP(i, n) {
        ll z; cin >> z; a.PB(z);
    }
    REP(i, n) {
        ll z; cin >> z; b.PB(z);
    } 
    //make a max and b min
    REP(i, n) {
        if (a[i] > b[i]) {
            ll temp = a[i];
            a[i] = b[i];
            b[i] = temp;
        }
    }
    ll amx = 0;
    ll bmx = 0;
    REP(i, n) {
        amx = max(amx, a[i]);
        bmx = max(bmx, b[i]);
    }
    cout << amx * bmx << endl;
    // Be insane or die trying.
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
