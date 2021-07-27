//Piece of Cake
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define rep(i,n,s) for(int i=0;i<n;i+=s)
using namespace std;
void solve()
{
	string str;
	cin >> str;
	int n = str.length();
	reverse(str.begin(), str.end());
	rep(i, str.length(), 1) {
		if (str[i] == '6')str[i] = '9';
		else if (str[i] == '9')str[i] = '6';
	}
	cout << str << endl;
 
}
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}
