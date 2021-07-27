//AtCoder Beginner
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, psum = 0;
	cin >> t ;
	int a[t];
	for (int i = 0; i < t; i++)
	{
		cin >> a[i];
		a[i] %= 200;
	}
	int hash[200] = {0};
	for (int i = 0; i < t; i++)
	{
		hash[a[i]]++;
	}
	for (int i = 0; i < 200; i++)
	{
		if (hash[i] >= 2) {
			psum += ((hash[i] - 1) * (hash[i] - 1 + 1)) / 2;
		}
	}
	cout << psum << endl;
}
