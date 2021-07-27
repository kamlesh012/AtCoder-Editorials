    //AtCoder Beginner Contest 
    #include <bits/stdc++.h>
    #define int long long
    using namespace std;

    int32_t main()
    {
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	int t, k;
    	cin >> t >> k;
    	while (k--)
    	{
    		if ((t % 200 ) == 0)(t /= 200);
    		else t = ((t * 1000) + 200);
    	}
    	cout << t << endl;
      
      return 0;
    }
