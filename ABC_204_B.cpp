#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define rep(i,n,s) for(int i=0;i<n;i+=s)
using namespace std;
void solve()
{
  int n;
  cin>>n;
  int a[n];
  rep(i,n,1)cin>>a[i];
  int sum=0;
  rep(i,n,1){if(a[i]>10){sum+=(a[i]-10);}}
  cout<<sum<<endl;
}
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
		solve();
}
