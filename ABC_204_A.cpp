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
//<---------------------------Explanation------------------------------>
  /*
  Case 1->If Fennec and Raccoon throw the same hand then in order for a draw to take place Serval must also throw the same hand.
  Case 2->If Fennec and Raccoon throw different hand then Serval must throw the third hand which is not equal to the any of hands thrown by Fennec and Raccoon.

*/
//<-------------------------------CODE------------------------------->
void solve()
{
	int a, b;
	cin >> a >> b;
	if (a == b)cout << a << nl;           // if a and b
	else cout << 3 - (a + b) << nl;

}

int32_t main()
{
	solve();
  
	return 0;
}
