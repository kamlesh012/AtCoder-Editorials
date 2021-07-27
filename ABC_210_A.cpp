//AT-Coder Beginner Contest Today
//<---------------------Kamlesh Singh Bisht--------------------->
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define cstrt clock_t start, end; double ctd; start = clock();
#define cend end = clock(); ctd = ((double) (end - start)) / CLOCKS_PER_SEC;cout<<ctd<<"sec"<<endl;
#define rep(i,n,s) for(int i=0;i<n;i+=s)
#define fr(i,n,s) for(int i=1;i<=n;i+=s)
#define nl '\n'
#define dbg(x) cout<<#x<<"->"<<x<<nl;
#define ebg(x,y) cout<<#x<<"->"<<x<<" "<<#y<<"->"<<y<<nl;
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
	int n, a, x, y;
	cin >> n >> a >> x >> y;
	int ans = 0;
	if (n <= a)ans = n * x;
	else {
		ans = a * x;
		ans += (n - a) * y;
	}
	cout << ans << endl;
 
 
}
 
int32_t main()
{
	// cstrt
 
	fastio;
  
	solve();
  // cend;
	return 0;
}
