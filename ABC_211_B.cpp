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
	map<string, int> m;
	string s;
	int i = 0;
	while (i < 4) {
		cin >> s;
		m[s]++;
		i++;
	}
 
	int h[4] = {0};
	map<string, int>::iterator it = m.begin();
	while (it != m.end()) {
		if (it->first == "H") {h[0]++;}
		else if (it->first == "HR") {h[1]++;}
		else if (it->first == "2B") {h[2]++;}
		else if (it->first == "3B") {h[3]++;}
		it++;
	}
 
	int f = 0;
	rep(i, 4, 1) {
		if (h[i] == 0) {
			cout << "No" << endl;
			f = -1;
			break;
		}
	}
	if (f == 0)cout << "Yes" << endl;
}
//Could be done w/o using STL as well.

int32_t main()
{
	// cstrt
 
	fastio;
 
 
	solve();
 
 
 
 
	// cend;
	return 0;
}
 
 
 
 
 
 
