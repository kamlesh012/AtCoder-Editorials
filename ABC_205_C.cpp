
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define rep(i,n,s) for(int i=0;i<n;i+=s)
#define mxsize 100000
using namespace std;
void solve()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (c % 2 == 0) {
		a = abs(a);
		b = abs(b);
		if (a > b)cout << ">" << endl;
		else if (a < b)cout << "<" << endl;
		else cout << "=" << endl;
	}
	else {
		if (a > b)cout << ">" << endl;
		else if (a < b)cout << "<" << endl;
		else cout << "=" << endl;
	}
}
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	solve();
	// solve2();
 
}
 
