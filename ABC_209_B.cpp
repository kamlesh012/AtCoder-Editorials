//AT-Coder Beginner Contest Today
//<---------------------Kamlesh Singh Bisht--------------------->
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define cstrt clock_t start, end; double ctd; start = clock();
#define cend end = clock(); ctd = ((double) (end - start)) / CLOCKS_PER_SEC;cout<<ctd<<"sec"<<endl;
#define rep(i,n,s) for(int i=0;i<n;i+=s)
#define fr(i,n,s) for(int i=1;i<=n;i+=s)
#define int long long
#define mod 1000000007
#define pi pair<int,int>
#define vi vector<int>
#define vii vector<pi>
#define pb push_back
#define a first
#define b second
using namespace std;
//<-------------------------------CODE------------------------------->
void solve()
{
	int n, x;
	cin >> n >> x;
	int a[n];
	int sum = 0;
	rep(i, n, 1) {
		cin >> a[i];
		if ((i + 1) % 2 == 0)a[i] -= 1;
		sum += a[i];
	}
	if (sum <= x)cout << "Yes" << endl;
	else cout << "No" << endl;
 
 
}
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}
