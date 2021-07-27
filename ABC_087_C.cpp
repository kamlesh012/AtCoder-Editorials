//ABC_087_C_Candies
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define rep(i,n,s) for(int i=0;i<n;i+=s)
using namespace std;
void solve()
{
	int n;
	cin >> n;
	int t[2][n];
	rep(i, 2, 1) {
		rep(j, n, 1)
		{
			cin >> t[i][j];
		}
	}
	int s = 0, ts = 0, mx = 0;
	rep(i, n, 1)
	{
		s += t[0][i];
		ts = s;
		for (int j = i; j < n; j++)
		{
			ts += t[1][j];
		}
		mx = max(ts, mx);
	}
	cout << mx << endl;
 
}
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}
