//HINT 1->  Coin Change Problem (Greedy ALgorithms)

#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define rep(i,n,s) for(int i=0;i<n;i+=s)
#define mxsize 100000
using namespace std;

//Hint 2-> USE concept of Coin Change Problem but instead of coins use factorials of that particular coin.
//Beware of Overflow & Out of Range Errors .Because Factorials can be pretty large-[Check Constraints of the problem]


int fact(int n)
{
	int fact = 1;
	for (int i = 2; i <= n; i++)
	{
		fact *= i;
	}
	return fact;
}

int fa[13];
void s2()
{
  
	for (int i = 0; i < 13; i++) {
		fa[i] = fact(i);
	}
	int p, ans = 0;
	cin >> p;
 
	while (p > 0) {
		int i = 0;
		for (; i < 13; i++)
		{
			if (fa[i] > p)break;
		}
		i--;
 
		int k = p / fa[i];
		ans += k;
		p = p - (k * fa[i]);
	}
 
	cout << ans << endl;
  
  //Random debugging.
	// cout << fa[12] << endl;
	// for (int i = 0; i < 13; i++) {
	// 	cout << fa[i] << " ";
	// }
 
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	s2();
 
}
