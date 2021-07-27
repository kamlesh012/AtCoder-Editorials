#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
void solve()
{
	int a[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
	}
	sort(a, a + 3);
	if ((a[1] - a[0]) == (a[2] - a[1]))cout << "Yes" << endl;
	else cout << "No" << endl;
}
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}
