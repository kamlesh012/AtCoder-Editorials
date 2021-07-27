#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define rep(i,n,s) for(int i=0;i<n;i+=s)
#define mxsize 100000
using namespace std;
void solve()
{
	int n, k;
	cin >> n >> k;
	int a[n];
	rep(i, n, 1)cin >> a[i];
	sort(a, a + n);
	int sum = 0;
	rep(i, n, 1) {
		if (k > i) {
			sum += a[i];
		}
		else break;
	}
	cout << sum << endl;
 
}
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	solve();
 
}
