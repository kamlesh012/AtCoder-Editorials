//ABC 203 ATCODER C-FriendAndTravelCosts
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define rep(i,n,s) for(int i=0;i<n;i+=s)
using namespace std;

void solve()
{
	int n, k, s = 0;
	cin >> n >> k;
	vector<pair<int, int>> v(n);
	int te = 0, me = 0;
	rep(i, n, 1) {
		cin >> te;
		cin >> me;
		v[i].first = te;
		v[i].second = me;
	}
	sort(v.begin(), v.end());
	s += k;
	rep(i, n, 1) {
		if (v[i].first <= s)
			s += v[i].second;
	}
	cout << s << endl;
}
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	solve();
 
}
