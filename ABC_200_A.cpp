    //AtCoder Beginner Conteste 200
    #include <bits/stdc++.h>
    #define int long long
    using namespace std;
    int32_t main()
    {
      
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	int t;
    	cin >> t;
      
    	if (t % 100 == 0)cout << t / 100 << endl;
    	else cout << ((int)t / 100) + 1 << endl;
      return 0;
    }
