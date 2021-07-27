//Nice Problem
//Was Medium for me as well.
//Used a lot of STL-->many functions for the first time.
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define rep(i,n,s) for(int i=0;i<n;i+=s)
#define mxsize 100000
#define a first
#define b second
using namespace std;

//Solved 5 mins after the contest.

void s3()
{
	int n, k; cin >> n >> k;
	vector<pair<int, int>> h;
	map<int, int> m;
	int a[n];
	rep(i, n, 1) {
		cin >> a[i];
		m.insert({a[i], 0});
	}
 
	int x = k / n;
	rep(i, n, 1)
	{
		m[a[i]] = x;
	}
 
	x = k % n;
	int i = 0;
 
	map<int, int>::iterator it = m.begin();
	while (it != m.end())
	{
		if (x > 0)
		{	it->second++;
			it++;
			x--;
		}
		if (x == 0)break;
	}
 
	rep(i, n, 1)
	{
		cout << m[a[i]] << " ";
	}
 
}
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	s3();
}
