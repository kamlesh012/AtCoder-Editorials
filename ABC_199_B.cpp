    //AtCoder Beginner Contest 199 
    //b->Intersection
    #include <bits/stdc++.h>
    #define int long long
    #define mod 1000000007
    using namespace std;
    int32_t main()
    {
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	int n;
    	cin >> n;
    	int a[n];
    	int b[n];
    	for (int i = 0; i < n; i++)
    	{
    		cin >> a[i];
    	}
    	for (int i = 0; i < n; i++)
    	{
    		cin >> b[i];
    	}
    	sort(a, a + n);
    	sort(b, b + n);
    	if (((b[0] - a[n - 1]) + 1) > 0)cout << ((b[0] - a[n - 1]) + 1) << endl;
    	else cout << 0 << endl;
      return 0;
      
    }
