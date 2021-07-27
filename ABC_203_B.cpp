#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define rep(i,n,s) for(int i=0;i<n;i+=s)
using namespace std;

//How many digits to erase to make a no. divisible by 3
void solve()
{
	int n, k, s = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= k; j++)
		{s += i * 100 + j;}
	}
	cout << s;
}
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	solve();
 
}
