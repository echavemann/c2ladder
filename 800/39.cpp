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

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long left(-1), right(-1);
        for(long p = 1; p < s.size(); p++){if(s[p - 1] != s[p]){left = p; right = p + 1; break;}}
        std::cout << left << " " << right << std::endl;
    }

}
