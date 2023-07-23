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

void solve() {
  int n;
  cin >> n;
  int cnt1 = 0, cnt2 = 0;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    if (c == 1) {
      cnt1++;
    } else {
      cnt2++;
    }
  }

  if ((cnt1 + 2 * cnt2) % 2 != 0) {
    cout << "NO\n";
  } else {
    int sum = (cnt1 + 2 * cnt2) / 2;
    if (sum % 2 == 0 || (sum % 2 == 1 && cnt1 != 0)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
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
