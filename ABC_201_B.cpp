
//Medium Difficult for Beginners
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;

//Function to sort vector of pairs with respect to second element of each pair.
bool sortbysec(const pair<string, int> &a,const pair<string, int> &b)
{
	return (a.second < b.second);
}

void solve()
{
	int n, k = 0;
	cin >> n;
	pair<string, int> p;
	vector < pair<string, int> >v;
	while (k < n)
	{
		pair<string, int> p;
		cin >> p.first;
		cin >> p.second;
		// cout << p.first << p.second << endl; 
		v.push_back(p);
		k++;
	} 
  
	sort(v.begin(), v.end(), sortbysec);    //Sorting elements of pair in increaseing order of second elements of each pair.
  
  //Debuggine-->below
	// for (int i = 0; i < v.size(); i++)
	// {
	// cout << v[i].first << " " << v[i].second << endl;
	// }
 
	cout << v[n - 2].first << endl;
}
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
  
}
