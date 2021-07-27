//Used Hashing here.
//A frequency array

#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define rep(i,n,s) for(int i=0;i<n;i+=s)
#define mxsize 100000
using namespace std;

int h[mxsize] = {0};

void solve2()
{
	int n, f = 0;
	cin >> n;
	int a[n];
	rep(i, n, 1)cin >> a[i];
	rep(i, n, 1) {h[a[i]]++;}
	for (int i = 1; i <= n; i++) {if (!h[i]) {f = 1; break;}}
	if (f == 0)cout << "Yes" << endl;
	else cout << "No" << endl;
 
}
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	solve2();
 
}
 
