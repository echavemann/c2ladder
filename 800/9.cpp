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
  int n; cin >> n;
  vl stones;
  ll mndex;
  bool mnseen = false;
  bool mxseen = false;
  int res = n;
  REP(i, n) {
    ll z; cin >> z; stones.PB(z);
    if (z == 1) mnseen = true;
    if (z == n) mxseen = true;
    if (mxseen && mnseen) {
      res = min(res, i+1);
    }
  }
  mnseen = false;
  mxseen = false;
  for (int i = (n-1); i > 0; i--) {
    ll z = stones[i];
    if (z == 1) mnseen = true;
    if (z == n) mxseen = true;
    if (mxseen && mnseen) {
      res = min(res, n-i);
    }
  }
  int temp = 0;
  mnseen = false;
  mxseen = false;
  for (int i = 0; i < n; i++) {
    ll z = stones[i];
    if (z == 1){
      mnseen = true;
      temp = i+1;
      break;
    }
    if (z == n){
      mxseen = true;
      temp = i+1;
      break;
    }
  }
  
  for (int i = (n-1); i > 0; i--) {
    ll z = stones[i];
    if ((z==1)&&mxseen) {
      res = min(res, (temp + (n-i)));
      break;
    }
    if ((z==n)&&mnseen) {

      res = min(res, temp+(n-i));
      break;
    }
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
